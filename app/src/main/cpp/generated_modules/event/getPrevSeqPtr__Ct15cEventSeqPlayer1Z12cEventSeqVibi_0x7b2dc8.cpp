#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: getPrevSeqPtr__Ct15cEventSeqPlayer1Z12cEventSeqVibi
// Address: 0x7b2dc8 - 0x7b2f58
void getPrevSeqPtr__Ct15cEventSeqPlayer1Z12cEventSeqVibi_0x7b2dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPrevSeqPtr__Ct15cEventSeqPlayer1Z12cEventSeqVibi_0x7b2dc8");
#endif

    switch (ctx->pc) {
        case 0x7b2e0cu: goto label_7b2e0c;
        case 0x7b2e1cu: goto label_7b2e1c;
        case 0x7b2e2cu: goto label_7b2e2c;
        case 0x7b2e58u: goto label_7b2e58;
        default: break;
    }

    ctx->pc = 0x7b2dc8u;

    // 0x7b2dc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b2dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b2dcc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b2dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b2dd0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b2dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b2dd4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b2dd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2dd8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b2dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b2ddc: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b2ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b2de0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b2de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b2de4: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b2de4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b2de8: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b2de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b2dec: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b2decu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b2df0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b2df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2df4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b2df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b2df8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b2df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b2dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b2e04: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B2E04u;
    SET_GPR_U32(ctx, 31, 0x7B2E0Cu);
    ctx->pc = 0x7B2E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2E04u;
    // 0x7b2e08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B2E04u, 0x7B2E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2E0Cu;
label_7b2e0c:
    // 0x7b2e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b2e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2e14: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B2E14u;
    SET_GPR_U32(ctx, 31, 0x7B2E1Cu);
    ctx->pc = 0x7B2E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2E14u;
    // 0x7b2e18: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B2E14u, 0x7B2E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2E1Cu;
label_7b2e1c:
    // 0x7b2e1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b2e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2e24: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B2E24u;
    SET_GPR_U32(ctx, 31, 0x7B2E2Cu);
    ctx->pc = 0x7B2E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2E24u;
    // 0x7b2e28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B2E24u, 0x7B2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2E2Cu;
label_7b2e2c:
    // 0x7b2e2c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b2e2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b2e30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b2e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2e34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b2e38: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B2E38u;
    {
        const bool branch_taken_0x7b2e38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2E38u;
        // 0x7b2e3c: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2e38) {
            ctx->pc = 0x7B2E48u;
            goto label_7b2e48;
        }
    }
    ctx->pc = 0x7B2E40u;
    // 0x7b2e40: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B2E40u;
    {
        const bool branch_taken_0x7b2e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2E40u;
        // 0x7b2e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2e40) {
            ctx->pc = 0x7B2F30u;
            goto label_7b2f30;
        }
    }
    ctx->pc = 0x7B2E48u;
label_7b2e48:
    // 0x7b2e48: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b2e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b2e4c: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B2E4Cu;
    {
        const bool branch_taken_0x7b2e4c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2E4Cu;
        // 0x7b2e50: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2e4c) {
            ctx->pc = 0x7B2F30u;
            goto label_7b2f30;
        }
    }
    ctx->pc = 0x7B2E54u;
    // 0x7b2e54: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b2e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b2e58:
    // 0x7b2e58: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b2e58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b2e5c: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B2E5Cu;
    {
        const bool branch_taken_0x7b2e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b2e5c) {
            ctx->pc = 0x7B2E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2E5Cu;
            // 0x7b2e60: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2F24u;
            goto label_7b2f24;
        }
    }
    ctx->pc = 0x7B2E64u;
    // 0x7b2e64: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b2e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b2e68: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x7b2e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b2e6c: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B2E6Cu;
    {
        const bool branch_taken_0x7b2e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2e6c) {
            ctx->pc = 0x7B2E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2E6Cu;
            // 0x7b2e70: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2F24u;
            goto label_7b2f24;
        }
    }
    ctx->pc = 0x7B2E74u;
    // 0x7b2e74: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B2E74u;
    {
        const bool branch_taken_0x7b2e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b2e74) {
            ctx->pc = 0x7B2EC0u;
            goto label_7b2ec0;
        }
    }
    ctx->pc = 0x7B2E7Cu;
    // 0x7b2e7c: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b2e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b2e80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2E80u;
    {
        const bool branch_taken_0x7b2e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2e80) {
            ctx->pc = 0x7B2E98u;
            goto label_7b2e98;
        }
    }
    ctx->pc = 0x7B2E88u;
    // 0x7b2e88: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x7B2E88u;
    {
        const bool branch_taken_0x7b2e88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2e88) {
            ctx->pc = 0x7B2EC0u;
            goto label_7b2ec0;
        }
    }
    ctx->pc = 0x7B2E90u;
    // 0x7b2e90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B2E90u;
    {
        const bool branch_taken_0x7b2e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2E90u;
        // 0x7b2e94: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2e90) {
            ctx->pc = 0x7B2EA4u;
            goto label_7b2ea4;
        }
    }
    ctx->pc = 0x7B2E98u;
label_7b2e98:
    // 0x7b2e98: 0x52400022  beql        $s2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x7B2E98u;
    {
        const bool branch_taken_0x7b2e98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b2e98) {
            ctx->pc = 0x7B2E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2E98u;
            // 0x7b2e9c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2F24u;
            goto label_7b2f24;
        }
    }
    ctx->pc = 0x7B2EA0u;
    // 0x7b2ea0: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b2ea0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b2ea4:
    // 0x7b2ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b2ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b2ea8: 0x0  nop
    ctx->pc = 0x7b2ea8u;
    // NOP
    // 0x7b2eac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b2eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b2eb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7b2eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b2eb4: 0x0  nop
    ctx->pc = 0x7b2eb4u;
    // NOP
    // 0x7b2eb8: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B2EB8u;
    {
        const bool branch_taken_0x7b2eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b2eb8) {
            ctx->pc = 0x7B2EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2EB8u;
            // 0x7b2ebc: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2F24u;
            goto label_7b2f24;
        }
    }
    ctx->pc = 0x7B2EC0u;
label_7b2ec0:
    // 0x7b2ec0: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B2EC0u;
    {
        const bool branch_taken_0x7b2ec0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b2ec0) {
            ctx->pc = 0x7B2EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2EC0u;
            // 0x7b2ec4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2F20u;
            goto label_7b2f20;
        }
    }
    ctx->pc = 0x7B2EC8u;
    // 0x7b2ec8: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b2ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b2ecc: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b2eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b2ed0: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x7b2ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7b2ed4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B2ED4u;
    {
        const bool branch_taken_0x7b2ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2ed4) {
            ctx->pc = 0x7B2ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2ED4u;
            // 0x7b2ed8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2F24u;
            goto label_7b2f24;
        }
    }
    ctx->pc = 0x7B2EDCu;
    // 0x7b2edc: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B2EDCu;
    {
        const bool branch_taken_0x7b2edc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b2edc) {
            ctx->pc = 0x7B2EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2EDCu;
            // 0x7b2ee0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2F20u;
            goto label_7b2f20;
        }
    }
    ctx->pc = 0x7B2EE4u;
    // 0x7b2ee4: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b2ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b2ee8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2EE8u;
    {
        const bool branch_taken_0x7b2ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2EE8u;
        // 0x7b2eec: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2ee8) {
            ctx->pc = 0x7B2F00u;
            goto label_7b2f00;
        }
    }
    ctx->pc = 0x7B2EF0u;
    // 0x7b2ef0: 0x5048000c  beql        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x7B2EF0u;
    {
        const bool branch_taken_0x7b2ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b2ef0) {
            ctx->pc = 0x7B2EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2EF0u;
            // 0x7b2ef4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2F24u;
            goto label_7b2f24;
        }
    }
    ctx->pc = 0x7B2EF8u;
    // 0x7b2ef8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B2EF8u;
    {
        const bool branch_taken_0x7b2ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2EF8u;
        // 0x7b2efc: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2ef8) {
            ctx->pc = 0x7B2F0Cu;
            goto label_7b2f0c;
        }
    }
    ctx->pc = 0x7B2F00u;
label_7b2f00:
    // 0x7b2f00: 0x54480007  bnel        $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B2F00u;
    {
        const bool branch_taken_0x7b2f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b2f00) {
            ctx->pc = 0x7B2F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2F00u;
            // 0x7b2f04: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2F20u;
            goto label_7b2f20;
        }
    }
    ctx->pc = 0x7B2F08u;
    // 0x7b2f08: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b2f08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b2f0c:
    // 0x7b2f0c: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x7b2f0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b2f10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b2f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b2f14: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B2F14u;
    {
        const bool branch_taken_0x7b2f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2f14) {
            ctx->pc = 0x7B2F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2F14u;
            // 0x7b2f18: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2F24u;
            goto label_7b2f24;
        }
    }
    ctx->pc = 0x7B2F1Cu;
    // 0x7b2f1c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b2f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b2f20:
    // 0x7b2f20: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b2f24:
    // 0x7b2f24: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B2F24u;
    {
        const bool branch_taken_0x7b2f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2F24u;
        // 0x7b2f28: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2f24) {
            ctx->pc = 0x7B2E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b2e58;
        }
    }
    ctx->pc = 0x7B2F2Cu;
    // 0x7b2f2c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b2f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b2f30:
    // 0x7b2f30: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b2f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b2f34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b2f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b2f38: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b2f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b2f3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b2f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b2f40: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b2f40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b2f44: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b2f44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b2f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b2f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b2f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B2F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2F4Cu;
        // 0x7b2f50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B2F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2F54u;
    // 0x7b2f54: 0x0  nop
    ctx->pc = 0x7b2f54u;
    // NOP
    ctx->pc = 0x7b2f58u;
}
} // namespace gh_event
