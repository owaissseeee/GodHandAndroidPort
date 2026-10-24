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

// Function: func_0028A560
// Address: 0x28a560 - 0x28a6b8
void func_0028A560_0x28a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028A560_0x28a560");
#endif

    switch (ctx->pc) {
        case 0x28a5ccu: goto label_28a5cc;
        case 0x28a600u: goto label_28a600;
        case 0x28a698u: goto label_28a698;
        case 0x28a6a0u: goto label_28a6a0;
        case 0x28a6a8u: goto label_28a6a8;
        default: break;
    }

    ctx->pc = 0x28a560u;

    // 0x28a560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a564: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28a568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a56c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a570: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28a570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28a574: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A574u;
    {
        const bool branch_taken_0x28a574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A574u;
        // 0x28a578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a574) {
            ctx->pc = 0x28A58Cu;
            goto label_28a58c;
        }
    }
    ctx->pc = 0x28A57Cu;
    // 0x28a57c: 0x5062002e  beql        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28A57Cu;
    {
        const bool branch_taken_0x28a57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28a57c) {
            ctx->pc = 0x28A580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A57Cu;
            // 0x28a580: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A638u;
            goto label_28a638;
        }
    }
    ctx->pc = 0x28A584u;
    // 0x28a584: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x28A584u;
    {
        const bool branch_taken_0x28a584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A584u;
        // 0x28a588: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a584) {
            ctx->pc = 0x28A6ACu;
            goto label_28a6ac;
        }
    }
    ctx->pc = 0x28A58Cu;
label_28a58c:
    // 0x28a58c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28a590: 0x240202a7  addiu       $v0, $zero, 0x2A7
    ctx->pc = 0x28a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x28a594: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28A594u;
    {
        const bool branch_taken_0x28a594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A594u;
        // 0x28a598: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a594) {
            ctx->pc = 0x28A5D4u;
            goto label_28a5d4;
        }
    }
    ctx->pc = 0x28A59Cu;
    // 0x28a59c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28A59Cu;
    {
        const bool branch_taken_0x28a59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A59Cu;
        // 0x28a5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a59c) {
            ctx->pc = 0x28A5D4u;
            goto label_28a5d4;
        }
    }
    ctx->pc = 0x28A5A4u;
    // 0x28a5a4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28a5a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28a5a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a5ac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x28a5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28a5b0: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x28a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x28a5b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28a5b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5b8: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x28a5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x28a5bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28a5bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28a5c4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28A5C4u;
    SET_GPR_U32(ctx, 31, 0x28A5CCu);
    ctx->pc = 0x28A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5C4u;
    // 0x28a5c8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28A5C4u, 0x28A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5CCu;
label_28a5cc:
    // 0x28a5cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28A5CCu;
    {
        const bool branch_taken_0x28a5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5CCu;
        // 0x28a5d0: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5cc) {
            ctx->pc = 0x28A604u;
            goto label_28a604;
        }
    }
    ctx->pc = 0x28A5D4u;
label_28a5d4:
    // 0x28a5d4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28a5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28a5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a5e0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x28a5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28a5e4: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x28a5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x28a5e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28a5e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5ec: 0x8c46007c  lw          $a2, 0x7C($v0)
    ctx->pc = 0x28a5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x28a5f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28a5f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28a5f8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28A5F8u;
    SET_GPR_U32(ctx, 31, 0x28A600u);
    ctx->pc = 0x28A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5F8u;
    // 0x28a5fc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28A5F8u, 0x28A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A600u;
label_28a600:
    // 0x28a600: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x28a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_28a604:
    // 0x28a604: 0x260305c0  addiu       $v1, $s0, 0x5C0
    ctx->pc = 0x28a604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    // 0x28a608: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A608u;
    {
        const bool branch_taken_0x28a608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28a608) {
            ctx->pc = 0x28A60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A608u;
            // 0x28a60c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A62Cu;
            goto label_28a62c;
        }
    }
    ctx->pc = 0x28A610u;
    // 0x28a610: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a614: 0xe60005c0  swc1        $f0, 0x5C0($s0)
    ctx->pc = 0x28a614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1472), bits); }
    // 0x28a618: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28a618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a61c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28a61cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28a620: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a624: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28a624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28a628: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x28a628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_28a62c:
    // 0x28a62c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28a630: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x28a630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x28a634: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x28a634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_28a638:
    // 0x28a638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a63c: 0xc60105c0  lwc1        $f1, 0x5C0($s0)
    ctx->pc = 0x28a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a640: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a644: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x28a644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x28a648: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x28a648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x28a64c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28a64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28a650: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x28a650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x28a654: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x28a654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x28a658: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28a658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a65c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28a65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28a660: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28a660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28a664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28a664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28a668: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28a668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28a66c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x28a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x28a670: 0xc60105c8  lwc1        $f1, 0x5C8($s0)
    ctx->pc = 0x28a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a674: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x28a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a678: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28a678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28a67c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28a67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28a680: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28a680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28a684: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28a684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28a688: 0x8e0215a0  lw          $v0, 0x15A0($s0)
    ctx->pc = 0x28a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5536)));
    // 0x28a68c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28a68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28a690: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28A690u;
    SET_GPR_U32(ctx, 31, 0x28A698u);
    ctx->pc = 0x28A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A690u;
    // 0x28a694: 0xae0215a0  sw          $v0, 0x15A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28A690u, 0x28A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A698u;
label_28a698:
    // 0x28a698: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x28A698u;
    SET_GPR_U32(ctx, 31, 0x28A6A0u);
    ctx->pc = 0x28A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A698u;
    // 0x28a69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x28A698u, 0x28A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6A0u;
label_28a6a0:
    // 0x28a6a0: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x28A6A0u;
    SET_GPR_U32(ctx, 31, 0x28A6A8u);
    ctx->pc = 0x28A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6A0u;
    // 0x28a6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x28A6A0u, 0x28A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6A8u;
label_28a6a8:
    // 0x28a6a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28a6ac:
    // 0x28a6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x28A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6B0u;
        // 0x28a6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A6B8u;
}
