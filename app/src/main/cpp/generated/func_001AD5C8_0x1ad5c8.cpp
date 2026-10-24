#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001AD5C8
// Address: 0x1ad5c8 - 0x1ad818
void func_001AD5C8_0x1ad5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AD5C8_0x1ad5c8");
#endif

    switch (ctx->pc) {
        case 0x1ad650u: goto label_1ad650;
        case 0x1ad6a4u: goto label_1ad6a4;
        case 0x1ad6c4u: goto label_1ad6c4;
        case 0x1ad7a8u: goto label_1ad7a8;
        case 0x1ad7b0u: goto label_1ad7b0;
        case 0x1ad7e8u: goto label_1ad7e8;
        default: break;
    }

    ctx->pc = 0x1ad5c8u;

    // 0x1ad5c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ad5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ad5cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ad5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ad5d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ad5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ad5d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ad5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad5dc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1ad5dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ad5e0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1ad5e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ad5e4: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1ad5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x1ad5e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD5E8u;
    {
        const bool branch_taken_0x1ad5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5E8u;
        // 0x1ad5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5e8) {
            ctx->pc = 0x1AD600u;
            goto label_1ad600;
        }
    }
    ctx->pc = 0x1AD5F0u;
    // 0x1ad5f0: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1AD5F0u;
    {
        const bool branch_taken_0x1ad5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5F0u;
        // 0x1ad5f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5f0) {
            ctx->pc = 0x1AD7A8u;
            goto label_1ad7a8;
        }
    }
    ctx->pc = 0x1AD5F8u;
    // 0x1ad5f8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1AD5F8u;
    {
        const bool branch_taken_0x1ad5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5F8u;
        // 0x1ad5fc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5f8) {
            ctx->pc = 0x1AD800u;
            goto label_1ad800;
        }
    }
    ctx->pc = 0x1AD600u;
label_1ad600:
    // 0x1ad600: 0x9222060d  lbu         $v0, 0x60D($s1)
    ctx->pc = 0x1ad600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1549)));
    // 0x1ad604: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1AD604u;
    {
        const bool branch_taken_0x1ad604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD604u;
        // 0x1ad608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad604) {
            ctx->pc = 0x1AD7E8u;
            goto label_1ad7e8;
        }
    }
    ctx->pc = 0x1AD60Cu;
    // 0x1ad60c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ad60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ad610: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AD610u;
    {
        const bool branch_taken_0x1ad610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD610u;
        // 0x1ad614: 0xa222060e  sb          $v0, 0x60E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1550), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad610) {
            ctx->pc = 0x1AD658u;
            goto label_1ad658;
        }
    }
    ctx->pc = 0x1AD618u;
    // 0x1ad618: 0xc62d0790  lwc1        $f13, 0x790($s1)
    ctx->pc = 0x1ad618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ad61c: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x1ad61cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x1ad620: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1ad620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1ad624: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ad624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ad628: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ad628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ad62c: 0x24e77b00  addiu       $a3, $a3, 0x7B00
    ctx->pc = 0x1ad62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31488));
    // 0x1ad630: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x1ad630u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x1ad634: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ad634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ad638: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ad638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ad63c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ad63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ad640: 0x26240630  addiu       $a0, $s1, 0x630
    ctx->pc = 0x1ad640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    // 0x1ad644: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ad644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad648: 0xc071ada  jal         func_1C6B68
    ctx->pc = 0x1AD648u;
    SET_GPR_U32(ctx, 31, 0x1AD650u);
    ctx->pc = 0x1AD64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD648u;
    // 0x1ad64c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B68u, 0x1AD648u, 0x1AD650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD650u;
label_1ad650:
    // 0x1ad650: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1AD650u;
    {
        const bool branch_taken_0x1ad650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD650u;
        // 0x1ad654: 0x8e2205b8  lw          $v0, 0x5B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad650) {
            ctx->pc = 0x1AD6C8u;
            goto label_1ad6c8;
        }
    }
    ctx->pc = 0x1AD658u;
label_1ad658:
    // 0x1ad658: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ad658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ad65c: 0x26300630  addiu       $s0, $s1, 0x630
    ctx->pc = 0x1ad65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    // 0x1ad660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ad660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad664: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ad664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ad668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad66c: 0xc6200790  lwc1        $f0, 0x790($s1)
    ctx->pc = 0x1ad66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ad670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad674: 0xc7b50000  lwc1        $f21, 0x0($sp)
    ctx->pc = 0x1ad674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ad678: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ad678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad67c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ad67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ad680: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ad680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ad684: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ad684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ad688: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1ad688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad68c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1ad68cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1ad690: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ad690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ad694: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ad694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ad698: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1ad698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad69c: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x1AD69Cu;
    SET_GPR_U32(ctx, 31, 0x1AD6A4u);
    ctx->pc = 0x1AD6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD69Cu;
    // 0x1ad6a0: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x1AD69Cu, 0x1AD6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6A4u;
label_1ad6a4:
    // 0x1ad6a4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ad6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ad6a8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ad6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ad6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6b0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ad6b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ad6b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ad6b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ad6b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6bc: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x1AD6BCu;
    SET_GPR_U32(ctx, 31, 0x1AD6C4u);
    ctx->pc = 0x1AD6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD6BCu;
    // 0x1ad6c0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x1AD6BCu, 0x1AD6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6C4u;
label_1ad6c4:
    // 0x1ad6c4: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x1ad6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_1ad6c8:
    // 0x1ad6c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad6cc: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1ad6ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad6d0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1ad6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1ad6d4: 0xae2205b8  sw          $v0, 0x5B8($s1)
    ctx->pc = 0x1ad6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
    // 0x1ad6d8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1ad6d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ad6dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD6DCu;
    {
        const bool branch_taken_0x1ad6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6DCu;
        // 0x1ad6e0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6dc) {
            ctx->pc = 0x1AD6F0u;
            goto label_1ad6f0;
        }
    }
    ctx->pc = 0x1AD6E4u;
    // 0x1ad6e4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad6e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD6E8u;
    {
        const bool branch_taken_0x1ad6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6E8u;
        // 0x1ad6ec: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6e8) {
            ctx->pc = 0x1AD6F4u;
            goto label_1ad6f4;
        }
    }
    ctx->pc = 0x1AD6F0u;
label_1ad6f0:
    // 0x1ad6f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad6f4:
    // 0x1ad6f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD6F4u;
    {
        const bool branch_taken_0x1ad6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6F4u;
        // 0x1ad6f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6f4) {
            ctx->pc = 0x1AD720u;
            goto label_1ad720;
        }
    }
    ctx->pc = 0x1AD6FCu;
    // 0x1ad6fc: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad700: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD704u;
    {
        const bool branch_taken_0x1ad704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD704u;
        // 0x1ad708: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad704) {
            ctx->pc = 0x1AD718u;
            goto label_1ad718;
        }
    }
    ctx->pc = 0x1AD70Cu;
    // 0x1ad70c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD710u;
    {
        const bool branch_taken_0x1ad710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD710u;
        // 0x1ad714: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad710) {
            ctx->pc = 0x1AD71Cu;
            goto label_1ad71c;
        }
    }
    ctx->pc = 0x1AD718u;
label_1ad718:
    // 0x1ad718: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad71c:
    // 0x1ad71c: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1ad71cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1ad720:
    // 0x1ad720: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad728: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad72c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD72Cu;
    {
        const bool branch_taken_0x1ad72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD72Cu;
        // 0x1ad730: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad72c) {
            ctx->pc = 0x1AD740u;
            goto label_1ad740;
        }
    }
    ctx->pc = 0x1AD734u;
    // 0x1ad734: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad738: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD738u;
    {
        const bool branch_taken_0x1ad738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD738u;
        // 0x1ad73c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad738) {
            ctx->pc = 0x1AD744u;
            goto label_1ad744;
        }
    }
    ctx->pc = 0x1AD740u;
label_1ad740:
    // 0x1ad740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad744:
    // 0x1ad744: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD744u;
    {
        const bool branch_taken_0x1ad744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD744u;
        // 0x1ad748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad744) {
            ctx->pc = 0x1AD770u;
            goto label_1ad770;
        }
    }
    ctx->pc = 0x1AD74Cu;
    // 0x1ad74c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad750: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD754u;
    {
        const bool branch_taken_0x1ad754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD754u;
        // 0x1ad758: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad754) {
            ctx->pc = 0x1AD768u;
            goto label_1ad768;
        }
    }
    ctx->pc = 0x1AD75Cu;
    // 0x1ad75c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad760: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD760u;
    {
        const bool branch_taken_0x1ad760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD760u;
        // 0x1ad764: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad760) {
            ctx->pc = 0x1AD76Cu;
            goto label_1ad76c;
        }
    }
    ctx->pc = 0x1AD768u;
label_1ad768:
    // 0x1ad768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad76c:
    // 0x1ad76c: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1ad76cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1ad770:
    // 0x1ad770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad774: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ad774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ad778: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1ad778u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad77c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ad77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ad780: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1ad780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad784: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ad784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad788: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1ad788u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ad78c: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x1ad78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1ad790: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ad790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad794: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ad794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad798: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ad798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad79c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ad79cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7a0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1AD7A0u;
    SET_GPR_U32(ctx, 31, 0x1AD7A8u);
    ctx->pc = 0x1AD7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7A0u;
    // 0x1ad7a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AD7A0u, 0x1AD7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7A8u;
label_1ad7a8:
    // 0x1ad7a8: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1AD7A8u;
    SET_GPR_U32(ctx, 31, 0x1AD7B0u);
    ctx->pc = 0x1AD7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7A8u;
    // 0x1ad7ac: 0x26240630  addiu       $a0, $s1, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1AD7A8u, 0x1AD7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7B0u;
label_1ad7b0:
    // 0x1ad7b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AD7B0u;
    {
        const bool branch_taken_0x1ad7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7B0u;
        // 0x1ad7b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7b0) {
            ctx->pc = 0x1AD7FCu;
            goto label_1ad7fc;
        }
    }
    ctx->pc = 0x1AD7B8u;
    // 0x1ad7b8: 0xa220060d  sb          $zero, 0x60D($s1)
    ctx->pc = 0x1ad7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1549), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad7bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ad7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ad7c0: 0xa220060e  sb          $zero, 0x60E($s1)
    ctx->pc = 0x1ad7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1550), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad7c4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ad7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ad7c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ad7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad7cc: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x1ad7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x1ad7d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ad7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ad7d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ad7d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ad7dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7e0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1AD7E0u;
    SET_GPR_U32(ctx, 31, 0x1AD7E8u);
    ctx->pc = 0x1AD7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7E0u;
    // 0x1ad7e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AD7E0u, 0x1AD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7E8u;
label_1ad7e8:
    // 0x1ad7e8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1ad7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad7ec: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1ad7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad7f0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1ad7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad7f4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1ad7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad7f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ad7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ad7fc:
    // 0x1ad7fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ad7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad800:
    // 0x1ad800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad804: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1ad804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ad808: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1ad808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ad80c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD80Cu;
        // 0x1ad810: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD814u;
    // 0x1ad814: 0x0  nop
    ctx->pc = 0x1ad814u;
    // NOP
    ctx->pc = 0x1ad818u;
}
