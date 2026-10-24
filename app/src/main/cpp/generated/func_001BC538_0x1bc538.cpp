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

// Function: func_001BC538
// Address: 0x1bc538 - 0x1bc610
void func_001BC538_0x1bc538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BC538_0x1bc538");
#endif

    switch (ctx->pc) {
        case 0x1bc5a0u: goto label_1bc5a0;
        case 0x1bc5c4u: goto label_1bc5c4;
        case 0x1bc5d8u: goto label_1bc5d8;
        default: break;
    }

    ctx->pc = 0x1bc538u;

    // 0x1bc538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc53c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bc53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bc540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc548: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1bc548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1bc54c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC54Cu;
    {
        const bool branch_taken_0x1bc54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC54Cu;
        // 0x1bc550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc54c) {
            ctx->pc = 0x1BC564u;
            goto label_1bc564;
        }
    }
    ctx->pc = 0x1BC554u;
    // 0x1bc554: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BC554u;
    {
        const bool branch_taken_0x1bc554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc554) {
            ctx->pc = 0x1BC558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC554u;
            // 0x1bc558: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC5B0u;
            goto label_1bc5b0;
        }
    }
    ctx->pc = 0x1BC55Cu;
    // 0x1bc55c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1BC55Cu;
    {
        const bool branch_taken_0x1bc55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC55Cu;
        // 0x1bc560: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc55c) {
            ctx->pc = 0x1BC600u;
            goto label_1bc600;
        }
    }
    ctx->pc = 0x1BC564u;
label_1bc564:
    // 0x1bc564: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1bc564u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1bc568: 0x24020314  addiu       $v0, $zero, 0x314
    ctx->pc = 0x1bc568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 788));
    // 0x1bc56c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC56Cu;
    {
        const bool branch_taken_0x1bc56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC56Cu;
        // 0x1bc570: 0x24020354  addiu       $v0, $zero, 0x354 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 852));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc56c) {
            ctx->pc = 0x1BC5A0u;
            goto label_1bc5a0;
        }
    }
    ctx->pc = 0x1BC574u;
    // 0x1bc574: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC574u;
    {
        const bool branch_taken_0x1bc574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC574u;
        // 0x1bc578: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc574) {
            ctx->pc = 0x1BC5A0u;
            goto label_1bc5a0;
        }
    }
    ctx->pc = 0x1BC57Cu;
    // 0x1bc57c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bc57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc580: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1bc580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1bc584: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1bc584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc588: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bc588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc58c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc58cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc590: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc594: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bc594u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc598: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1BC598u;
    SET_GPR_U32(ctx, 31, 0x1BC5A0u);
    ctx->pc = 0x1BC59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC598u;
    // 0x1bc59c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1BC598u, 0x1BC5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC5A0u;
label_1bc5a0:
    // 0x1bc5a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc5a4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bc5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc5a8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1bc5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bc5ac: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x1bc5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc5b0:
    // 0x1bc5b0: 0x3c013e0e  lui         $at, 0x3E0E
    ctx->pc = 0x1bc5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15886 << 16));
    // 0x1bc5b4: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1bc5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1bc5b8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bc5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bc5bc: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x1BC5BCu;
    SET_GPR_U32(ctx, 31, 0x1BC5C4u);
    ctx->pc = 0x1BC5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC5BCu;
    // 0x1bc5c0: 0xc60d0640  lwc1        $f13, 0x640($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x1BC5BCu, 0x1BC5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC5C4u;
label_1bc5c4:
    // 0x1bc5c4: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x1bc5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc5c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bc5c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bc5cc: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1bc5ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1bc5d0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1BC5D0u;
    SET_GPR_U32(ctx, 31, 0x1BC5D8u);
    ctx->pc = 0x1BC5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC5D0u;
    // 0x1bc5d4: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1BC5D0u, 0x1BC5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC5D8u;
label_1bc5d8:
    // 0x1bc5d8: 0xc6010640  lwc1        $f1, 0x640($s0)
    ctx->pc = 0x1bc5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc5dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1bc5dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc5e0: 0x0  nop
    ctx->pc = 0x1bc5e0u;
    // NOP
    // 0x1bc5e4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC5E4u;
    {
        const bool branch_taken_0x1bc5e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5E4u;
        // 0x1bc5e8: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5e4) {
            ctx->pc = 0x1BC5FCu;
            goto label_1bc5fc;
        }
    }
    ctx->pc = 0x1BC5ECu;
    // 0x1bc5ec: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bc5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc5f0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1bc5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc5f4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1bc5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc5f8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bc5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bc5fc:
    // 0x1bc5fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bc5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc600:
    // 0x1bc600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc604: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC604u;
        // 0x1bc608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC60Cu;
    // 0x1bc60c: 0x0  nop
    ctx->pc = 0x1bc60cu;
    // NOP
    ctx->pc = 0x1bc610u;
}
