#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: fpdiv
// Address: 0x79ac48 - 0x79ada8
void fpdiv_0x79ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpdiv_0x79ac48");
#endif

    switch (ctx->pc) {
        case 0x79ac68u: goto label_79ac68;
        case 0x79ac78u: goto label_79ac78;
        case 0x79ad40u: goto label_79ad40;
        case 0x79ad98u: goto label_79ad98;
        default: break;
    }

    ctx->pc = 0x79ac48u;

    // 0x79ac48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79ac4c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x79ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x79ac50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79ac54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79ac58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79ac58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac5c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x79ac5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x79ac60: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79AC60u;
    SET_GPR_U32(ctx, 31, 0x79AC68u);
    ctx->pc = 0x79AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC60u;
    // 0x79ac64: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79AC60u, 0x79AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC68u;
label_79ac68:
    // 0x79ac68: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79ac68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79ac6c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x79ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x79ac70: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79AC70u;
    SET_GPR_U32(ctx, 31, 0x79AC78u);
    ctx->pc = 0x79AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC70u;
    // 0x79ac74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79AC70u, 0x79AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC78u;
label_79ac78:
    // 0x79ac78: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x79ac78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ac7c: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x79ac7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79ac80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC80u;
    {
        const bool branch_taken_0x79ac80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC80u;
        // 0x79ac84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac80) {
            ctx->pc = 0x79AC90u;
            goto label_79ac90;
        }
    }
    ctx->pc = 0x79AC88u;
    // 0x79ac88: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x79AC88u;
    {
        const bool branch_taken_0x79ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC88u;
        // 0x79ac8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac88) {
            ctx->pc = 0x79AD90u;
            goto label_79ad90;
        }
    }
    ctx->pc = 0x79AC90u;
label_79ac90:
    // 0x79ac90: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x79ac90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ac94: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79ac94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79ac98: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x79AC98u;
    {
        const bool branch_taken_0x79ac98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC98u;
        // 0x79ac9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac98) {
            ctx->pc = 0x79AD90u;
            goto label_79ad90;
        }
    }
    ctx->pc = 0x79ACA0u;
    // 0x79aca0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79aca4: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x79aca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x79aca8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x79aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79acac: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79acacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79acb0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79ACB0u;
    {
        const bool branch_taken_0x79acb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACB0u;
        // 0x79acb4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acb0) {
            ctx->pc = 0x79ACC4u;
            goto label_79acc4;
        }
    }
    ctx->pc = 0x79ACB8u;
    // 0x79acb8: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x79acb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x79acbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79ACBCu;
    {
        const bool branch_taken_0x79acbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACBCu;
        // 0x79acc0: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acbc) {
            ctx->pc = 0x79ACD8u;
            goto label_79acd8;
        }
    }
    ctx->pc = 0x79ACC4u;
label_79acc4:
    // 0x79acc4: 0x14e60032  bne         $a3, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x79ACC4u;
    {
        const bool branch_taken_0x79acc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x79ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACC4u;
        // 0x79acc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acc4) {
            ctx->pc = 0x79AD90u;
            goto label_79ad90;
        }
    }
    ctx->pc = 0x79ACCCu;
    // 0x79accc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79acccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79acd0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x79ACD0u;
    {
        const bool branch_taken_0x79acd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD0u;
        // 0x79acd4: 0x2444c288  addiu       $a0, $v0, -0x3D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acd0) {
            ctx->pc = 0x79AD90u;
            goto label_79ad90;
        }
    }
    ctx->pc = 0x79ACD8u;
label_79acd8:
    // 0x79acd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ACD8u;
    {
        const bool branch_taken_0x79acd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD8u;
        // 0x79acdc: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acd8) {
            ctx->pc = 0x79ACF0u;
            goto label_79acf0;
        }
    }
    ctx->pc = 0x79ACE0u;
    // 0x79ace0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x79ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x79ace4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ace8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x79ACE8u;
    {
        const bool branch_taken_0x79ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACE8u;
        // 0x79acec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ace8) {
            ctx->pc = 0x79AD90u;
            goto label_79ad90;
        }
    }
    ctx->pc = 0x79ACF0u;
label_79acf0:
    // 0x79acf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ACF0u;
    {
        const bool branch_taken_0x79acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACF0u;
        // 0x79acf4: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acf0) {
            ctx->pc = 0x79AD08u;
            goto label_79ad08;
        }
    }
    ctx->pc = 0x79ACF8u;
    // 0x79acf8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79acfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79acfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad00: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x79AD00u;
    {
        const bool branch_taken_0x79ad00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD00u;
        // 0x79ad04: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad00) {
            ctx->pc = 0x79AD90u;
            goto label_79ad90;
        }
    }
    ctx->pc = 0x79AD08u;
label_79ad08:
    // 0x79ad08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x79ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x79ad0c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x79ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79ad10: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x79ad10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x79ad14: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x79ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79ad18: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79ad18u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x79ad1c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AD1Cu;
    {
        const bool branch_taken_0x79ad1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD1Cu;
        // 0x79ad20: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad1c) {
            ctx->pc = 0x79AD34u;
            goto label_79ad34;
        }
    }
    ctx->pc = 0x79AD24u;
    // 0x79ad24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79ad28: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x79ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x79ad2c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x79ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x79ad30: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79ad30u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79ad34:
    // 0x79ad34: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x79ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x79ad38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AD38u;
    {
        const bool branch_taken_0x79ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD38u;
        // 0x79ad3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad38) {
            ctx->pc = 0x79AD44u;
            goto label_79ad44;
        }
    }
    ctx->pc = 0x79AD40u;
label_79ad40:
    // 0x79ad40: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79ad40u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79ad44:
    // 0x79ad44: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AD44u;
    {
        const bool branch_taken_0x79ad44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad44) {
            ctx->pc = 0x79AD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD44u;
            // 0x79ad48: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD58u;
            goto label_79ad58;
        }
    }
    ctx->pc = 0x79AD4Cu;
    // 0x79ad4c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x79ad4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x79ad50: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x79ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x79ad54: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x79ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_79ad58:
    // 0x79ad58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79AD58u;
    {
        const bool branch_taken_0x79ad58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD58u;
        // 0x79ad5c: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad58) {
            ctx->pc = 0x79AD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad40;
        }
    }
    ctx->pc = 0x79AD60u;
    // 0x79ad60: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x79ad60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x79ad64: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x79ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x79ad68: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79AD68u;
    {
        const bool branch_taken_0x79ad68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79ad68) {
            ctx->pc = 0x79AD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD68u;
            // 0x79ad6c: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD8Cu;
            goto label_79ad8c;
        }
    }
    ctx->pc = 0x79AD70u;
    // 0x79ad70: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x79ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x79ad74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD74u;
    {
        const bool branch_taken_0x79ad74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD74u;
        // 0x79ad78: 0x24e20040  addiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad74) {
            ctx->pc = 0x79AD84u;
            goto label_79ad84;
        }
    }
    ctx->pc = 0x79AD7Cu;
    // 0x79ad7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AD7Cu;
    {
        const bool branch_taken_0x79ad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD7Cu;
        // 0x79ad80: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad7c) {
            ctx->pc = 0x79AD88u;
            goto label_79ad88;
        }
    }
    ctx->pc = 0x79AD84u;
label_79ad84:
    // 0x79ad84: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x79ad84u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_79ad88:
    // 0x79ad88: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x79ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_79ad8c:
    // 0x79ad8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x79ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_79ad90:
    // 0x79ad90: 0xc1e696e  jal         func_79A5B8
    ctx->pc = 0x79AD90u;
    SET_GPR_U32(ctx, 31, 0x79AD98u);
    ctx->pc = 0x79A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5B8u, 0x79AD90u, 0x79AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD98u;
label_79ad98:
    // 0x79ad98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79ad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ad9c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x79ad9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ada0: 0x3e00008  jr          $ra
    ctx->pc = 0x79ADA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADA0u;
        // 0x79ada4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ADA8u;
}
} // namespace gh_r505
