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

// Function: cIDBase_trans
// Address: 0x2aac28 - 0x2aaef0
void cIDBase_trans_0x2aac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_trans_0x2aac28");
#endif

    switch (ctx->pc) {
        case 0x2aac70u: goto label_2aac70;
        case 0x2aaca0u: goto label_2aaca0;
        case 0x2aacb8u: goto label_2aacb8;
        case 0x2aacccu: goto label_2aaccc;
        case 0x2aacf4u: goto label_2aacf4;
        case 0x2aad10u: goto label_2aad10;
        case 0x2aad24u: goto label_2aad24;
        case 0x2aad38u: goto label_2aad38;
        case 0x2aad58u: goto label_2aad58;
        case 0x2aad68u: goto label_2aad68;
        case 0x2aad70u: goto label_2aad70;
        case 0x2aad90u: goto label_2aad90;
        case 0x2aade8u: goto label_2aade8;
        case 0x2aae64u: goto label_2aae64;
        case 0x2aae74u: goto label_2aae74;
        case 0x2aae84u: goto label_2aae84;
        case 0x2aae94u: goto label_2aae94;
        case 0x2aaea4u: goto label_2aaea4;
        default: break;
    }

    ctx->pc = 0x2aac28u;

    // 0x2aac28: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2aac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2aac2c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2aac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2aac30: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2aac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2aac34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aac34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac38: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2aac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2aac3c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2aac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2aac40: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2aac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2aac44: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2aac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2aac48: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2aac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2aac4c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2aac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2aac50: 0x92420019  lbu         $v0, 0x19($s2)
    ctx->pc = 0x2aac50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25)));
    // 0x2aac54: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2AAC54u;
    {
        const bool branch_taken_0x2aac54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC54u;
        // 0x2aac58: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac54) {
            ctx->pc = 0x2AAECCu;
            goto label_2aaecc;
        }
    }
    ctx->pc = 0x2AAC5Cu;
    // 0x2aac5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2aac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2aac60: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x2AAC60u;
    {
        const bool branch_taken_0x2aac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC60u;
        // 0x2aac64: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac60) {
            ctx->pc = 0x2AAED0u;
            goto label_2aaed0;
        }
    }
    ctx->pc = 0x2AAC68u;
    // 0x2aac68: 0xc0b153a  jal         func_2C54E8
    ctx->pc = 0x2AAC68u;
    SET_GPR_U32(ctx, 31, 0x2AAC70u);
    ctx->pc = 0x2AAC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAC68u;
    // 0x2aac6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C54E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C54E8u, 0x2AAC68u, 0x2AAC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC70u;
label_2aac70:
    // 0x2aac70: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2aac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2aac74: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2AAC74u;
    {
        const bool branch_taken_0x2aac74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC74u;
        // 0x2aac78: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac74) {
            ctx->pc = 0x2AAD44u;
            goto label_2aad44;
        }
    }
    ctx->pc = 0x2AAC7Cu;
    // 0x2aac7c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2aac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2aac80: 0x244374a0  addiu       $v1, $v0, 0x74A0
    ctx->pc = 0x2aac80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2aac84: 0x8c62056c  lw          $v0, 0x56C($v1)
    ctx->pc = 0x2aac84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2aac88: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AAC88u;
    {
        const bool branch_taken_0x2aac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC88u;
        // 0x2aac8c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac88) {
            ctx->pc = 0x2AACD4u;
            goto label_2aacd4;
        }
    }
    ctx->pc = 0x2AAC90u;
    // 0x2aac90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aac90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac94: 0x24a5af20  addiu       $a1, $a1, -0x50E0
    ctx->pc = 0x2aac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
    // 0x2aac98: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2AAC98u;
    SET_GPR_U32(ctx, 31, 0x2AACA0u);
    ctx->pc = 0x2AAC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAC98u;
    // 0x2aac9c: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2AAC98u, 0x2AACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACA0u;
label_2aaca0:
    // 0x2aaca0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2aaca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2aaca4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2aaca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2aaca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aaca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aacac: 0x24a5af28  addiu       $a1, $a1, -0x50D8
    ctx->pc = 0x2aacacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946600));
    // 0x2aacb0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2AACB0u;
    SET_GPR_U32(ctx, 31, 0x2AACB8u);
    ctx->pc = 0x2AACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AACB0u;
    // 0x2aacb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2AACB0u, 0x2AACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACB8u;
label_2aacb8:
    // 0x2aacb8: 0x8e242380  lw          $a0, 0x2380($s1)
    ctx->pc = 0x2aacb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    // 0x2aacbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aacbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aacc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2aacc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aacc4: 0xc0a932c  jal         func_2A4CB0
    ctx->pc = 0x2AACC4u;
    SET_GPR_U32(ctx, 31, 0x2AACCCu);
    ctx->pc = 0x2AACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AACC4u;
    // 0x2aacc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2AACC4u, 0x2AACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACCCu;
label_2aaccc:
    // 0x2aaccc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2AACCCu;
    {
        const bool branch_taken_0x2aaccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACCCu;
        // 0x2aacd0: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaccc) {
            ctx->pc = 0x2AAD28u;
            goto label_2aad28;
        }
    }
    ctx->pc = 0x2AACD4u;
label_2aacd4:
    // 0x2aacd4: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AACD4u;
    {
        const bool branch_taken_0x2aacd4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACD4u;
        // 0x2aacd8: 0x28420007  slti        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacd4) {
            ctx->pc = 0x2AAD24u;
            goto label_2aad24;
        }
    }
    ctx->pc = 0x2AACDCu;
    // 0x2aacdc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AACDCu;
    {
        const bool branch_taken_0x2aacdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACDCu;
        // 0x2aace0: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacdc) {
            ctx->pc = 0x2AAD24u;
            goto label_2aad24;
        }
    }
    ctx->pc = 0x2AACE4u;
    // 0x2aace4: 0x8c640558  lw          $a0, 0x558($v1)
    ctx->pc = 0x2aace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1368)));
    // 0x2aace8: 0x24a5af20  addiu       $a1, $a1, -0x50E0
    ctx->pc = 0x2aace8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
    // 0x2aacec: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2AACECu;
    SET_GPR_U32(ctx, 31, 0x2AACF4u);
    ctx->pc = 0x2AACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AACECu;
    // 0x2aacf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2AACECu, 0x2AACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACF4u;
label_2aacf4:
    // 0x2aacf4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2aacf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2aacf8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2aacf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2aacfc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2aacfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2aad00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aad00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad04: 0x24a5af28  addiu       $a1, $a1, -0x50D8
    ctx->pc = 0x2aad04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946600));
    // 0x2aad08: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2AAD08u;
    SET_GPR_U32(ctx, 31, 0x2AAD10u);
    ctx->pc = 0x2AAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD08u;
    // 0x2aad0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2AAD08u, 0x2AAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD10u;
label_2aad10:
    // 0x2aad10: 0x8e242380  lw          $a0, 0x2380($s1)
    ctx->pc = 0x2aad10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    // 0x2aad14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aad14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad18: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2aad18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad1c: 0xc0a932c  jal         func_2A4CB0
    ctx->pc = 0x2AAD1Cu;
    SET_GPR_U32(ctx, 31, 0x2AAD24u);
    ctx->pc = 0x2AAD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD1Cu;
    // 0x2aad20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2AAD1Cu, 0x2AAD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD24u;
label_2aad24:
    // 0x2aad24: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2aad24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2aad28:
    // 0x2aad28: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2aad28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2aad2c: 0x24a5af30  addiu       $a1, $a1, -0x50D0
    ctx->pc = 0x2aad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946608));
    // 0x2aad30: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2AAD30u;
    SET_GPR_U32(ctx, 31, 0x2AAD38u);
    ctx->pc = 0x2AAD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD30u;
    // 0x2aad34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2AAD30u, 0x2AAD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD38u;
label_2aad38:
    // 0x2aad38: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2aad38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2aad3c: 0x8c6423a4  lw          $a0, 0x23A4($v1)
    ctx->pc = 0x2aad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2aad40: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2aad40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2aad44:
    // 0x2aad44: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x2aad44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x2aad48: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x2aad48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aad4c: 0x26107510  addiu       $s0, $s0, 0x7510
    ctx->pc = 0x2aad4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29968));
    // 0x2aad50: 0xc0abcfe  jal         func_2AF3F8
    ctx->pc = 0x2AAD50u;
    SET_GPR_U32(ctx, 31, 0x2AAD58u);
    ctx->pc = 0x2AAD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD50u;
    // 0x2aad54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF3F8u, 0x2AAD50u, 0x2AAD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD58u;
label_2aad58:
    // 0x2aad58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2aad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aad60: 0xc0abdaa  jal         func_2AF6A8
    ctx->pc = 0x2AAD60u;
    SET_GPR_U32(ctx, 31, 0x2AAD68u);
    ctx->pc = 0x2AAD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD60u;
    // 0x2aad64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6A8u, 0x2AAD60u, 0x2AAD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD68u;
label_2aad68:
    // 0x2aad68: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2aad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2aad6c: 0x0  nop
    ctx->pc = 0x2aad6cu;
    // NOP
label_2aad70:
    // 0x2aad70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aad70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad74: 0x18400050  blez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2AAD74u;
    {
        const bool branch_taken_0x2aad74 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2AAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD74u;
        // 0x2aad78: 0x2634ffff  addiu       $s4, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad74) {
            ctx->pc = 0x2AAEB8u;
            goto label_2aaeb8;
        }
    }
    ctx->pc = 0x2AAD7Cu;
    // 0x2aad7c: 0x3c162000  lui         $s6, 0x2000
    ctx->pc = 0x2aad7cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
    // 0x2aad80: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2aad80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aad84: 0x3c150800  lui         $s5, 0x800
    ctx->pc = 0x2aad84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)2048 << 16));
    // 0x2aad88: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x2aad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2aad8c: 0x0  nop
    ctx->pc = 0x2aad8cu;
    // NOP
label_2aad90:
    // 0x2aad90: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2aad90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2aad94: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2aad94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aad98: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2aad98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aad9c: 0x10a00041  beqz        $a1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2AAD9Cu;
    {
        const bool branch_taken_0x2aad9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD9Cu;
        // 0x2aada0: 0x24900001  addiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad9c) {
            ctx->pc = 0x2AAEA4u;
            goto label_2aaea4;
        }
    }
    ctx->pc = 0x2AADA4u;
    // 0x2aada4: 0x80a2002b  lb          $v0, 0x2B($a1)
    ctx->pc = 0x2aada4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 43)));
    // 0x2aada8: 0x5451003f  bnel        $v0, $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2AADA8u;
    {
        const bool branch_taken_0x2aada8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2aada8) {
            ctx->pc = 0x2AADACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AADA8u;
            // 0x2aadac: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAEA8u;
            goto label_2aaea8;
        }
    }
    ctx->pc = 0x2AADB0u;
    // 0x2aadb0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2aadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2aadb4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2aadb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadb8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2aadb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2aadbc: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2AADBCu;
    {
        const bool branch_taken_0x2aadbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aadbc) {
            ctx->pc = 0x2AADC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AADBCu;
            // 0x2aadc0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAEA8u;
            goto label_2aaea8;
        }
    }
    ctx->pc = 0x2AADC4u;
    // 0x2aadc4: 0x80a20029  lb          $v0, 0x29($a1)
    ctx->pc = 0x2aadc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
    // 0x2aadc8: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AADC8u;
    {
        const bool branch_taken_0x2aadc8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADC8u;
        // 0x2aadcc: 0x1351024  and         $v0, $t1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadc8) {
            ctx->pc = 0x2AAE10u;
            goto label_2aae10;
        }
    }
    ctx->pc = 0x2AADD0u;
    // 0x2aadd0: 0x8ca70020  lw          $a3, 0x20($a1)
    ctx->pc = 0x2aadd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2aadd4: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2AADD4u;
    {
        const bool branch_taken_0x2aadd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADD4u;
        // 0x2aadd8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadd4) {
            ctx->pc = 0x2AAE08u;
            goto label_2aae08;
        }
    }
    ctx->pc = 0x2AADDCu;
    // 0x2aaddc: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x2aaddcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x2aade0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2aade0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aade4: 0x8ce4002c  lw          $a0, 0x2C($a3)
    ctx->pc = 0x2aade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_2aade8:
    // 0x2aade8: 0x410fa  dsrl        $v0, $a0, 3
    ctx->pc = 0x2aade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 3);
    // 0x2aadec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aadecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aadf0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AADF0u;
    {
        const bool branch_taken_0x2aadf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADF0u;
        // 0x2aadf4: 0x881024  and         $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadf0) {
            ctx->pc = 0x2AADFCu;
            goto label_2aadfc;
        }
    }
    ctx->pc = 0x2AADF8u;
    // 0x2aadf8: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x2aadf8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
label_2aadfc:
    // 0x2aadfc: 0x8ce70020  lw          $a3, 0x20($a3)
    ctx->pc = 0x2aadfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2aae00: 0x54e0fff9  bnel        $a3, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AAE00u;
    {
        const bool branch_taken_0x2aae00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aae00) {
            ctx->pc = 0x2AAE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAE00u;
            // 0x2aae04: 0x8ce4002c  lw          $a0, 0x2C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aade8;
        }
    }
    ctx->pc = 0x2AAE08u;
label_2aae08:
    // 0x2aae08: 0x10730026  beq         $v1, $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x2AAE08u;
    {
        const bool branch_taken_0x2aae08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x2AAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE08u;
        // 0x2aae0c: 0x1351024  and         $v0, $t1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae08) {
            ctx->pc = 0x2AAEA4u;
            goto label_2aaea4;
        }
    }
    ctx->pc = 0x2AAE10u;
label_2aae10:
    // 0x2aae10: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AAE10u;
    {
        const bool branch_taken_0x2aae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aae10) {
            ctx->pc = 0x2AAE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAE10u;
            // 0x2aae14: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAEA8u;
            goto label_2aaea8;
        }
    }
    ctx->pc = 0x2AAE18u;
    // 0x2aae18: 0x90a40088  lbu         $a0, 0x88($a1)
    ctx->pc = 0x2aae18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x2aae1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aae20: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AAE20u;
    {
        const bool branch_taken_0x2aae20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE20u;
        // 0x2aae24: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae20) {
            ctx->pc = 0x2AAE6Cu;
            goto label_2aae6c;
        }
    }
    ctx->pc = 0x2AAE28u;
    // 0x2aae28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AAE28u;
    {
        const bool branch_taken_0x2aae28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE28u;
        // 0x2aae2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae28) {
            ctx->pc = 0x2AAE40u;
            goto label_2aae40;
        }
    }
    ctx->pc = 0x2AAE30u;
    // 0x2aae30: 0x10930009  beq         $a0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AAE30u;
    {
        const bool branch_taken_0x2aae30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x2AAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE30u;
        // 0x2aae34: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae30) {
            ctx->pc = 0x2AAE58u;
            goto label_2aae58;
        }
    }
    ctx->pc = 0x2AAE38u;
    // 0x2aae38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2AAE38u;
    {
        const bool branch_taken_0x2aae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE38u;
        // 0x2aae3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae38) {
            ctx->pc = 0x2AAE9Cu;
            goto label_2aae9c;
        }
    }
    ctx->pc = 0x2AAE40u;
label_2aae40:
    // 0x2aae40: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AAE40u;
    {
        const bool branch_taken_0x2aae40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE40u;
        // 0x2aae44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae40) {
            ctx->pc = 0x2AAE8Cu;
            goto label_2aae8c;
        }
    }
    ctx->pc = 0x2AAE48u;
    // 0x2aae48: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AAE48u;
    {
        const bool branch_taken_0x2aae48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE48u;
        // 0x2aae4c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae48) {
            ctx->pc = 0x2AAE7Cu;
            goto label_2aae7c;
        }
    }
    ctx->pc = 0x2AAE50u;
    // 0x2aae50: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2AAE50u;
    {
        const bool branch_taken_0x2aae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE50u;
        // 0x2aae54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae50) {
            ctx->pc = 0x2AAE9Cu;
            goto label_2aae9c;
        }
    }
    ctx->pc = 0x2AAE58u;
label_2aae58:
    // 0x2aae58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae5c: 0xc0aabfc  jal         func_2AAFF0
    ctx->pc = 0x2AAE5Cu;
    SET_GPR_U32(ctx, 31, 0x2AAE64u);
    ctx->pc = 0x2AAE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAE5Cu;
    // 0x2aae60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAFF0u, 0x2AAE5Cu, 0x2AAE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE64u;
label_2aae64:
    // 0x2aae64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2AAE64u;
    {
        const bool branch_taken_0x2aae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE64u;
        // 0x2aae68: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae64) {
            ctx->pc = 0x2AAEA8u;
            goto label_2aaea8;
        }
    }
    ctx->pc = 0x2AAE6Cu;
label_2aae6c:
    // 0x2aae6c: 0xc0aac2e  jal         func_2AB0B8
    ctx->pc = 0x2AAE6Cu;
    SET_GPR_U32(ctx, 31, 0x2AAE74u);
    ctx->pc = 0x2AAE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAE6Cu;
    // 0x2aae70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB0B8u, 0x2AAE6Cu, 0x2AAE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE74u;
label_2aae74:
    // 0x2aae74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AAE74u;
    {
        const bool branch_taken_0x2aae74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE74u;
        // 0x2aae78: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae74) {
            ctx->pc = 0x2AAEA8u;
            goto label_2aaea8;
        }
    }
    ctx->pc = 0x2AAE7Cu;
label_2aae7c:
    // 0x2aae7c: 0xc0aaca8  jal         func_2AB2A0
    ctx->pc = 0x2AAE7Cu;
    SET_GPR_U32(ctx, 31, 0x2AAE84u);
    ctx->pc = 0x2AAE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAE7Cu;
    // 0x2aae80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB2A0u, 0x2AAE7Cu, 0x2AAE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE84u;
label_2aae84:
    // 0x2aae84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AAE84u;
    {
        const bool branch_taken_0x2aae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE84u;
        // 0x2aae88: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae84) {
            ctx->pc = 0x2AAEA8u;
            goto label_2aaea8;
        }
    }
    ctx->pc = 0x2AAE8Cu;
label_2aae8c:
    // 0x2aae8c: 0xc0aacd8  jal         func_2AB360
    ctx->pc = 0x2AAE8Cu;
    SET_GPR_U32(ctx, 31, 0x2AAE94u);
    ctx->pc = 0x2AAE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAE8Cu;
    // 0x2aae90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB360u, 0x2AAE8Cu, 0x2AAE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE94u;
label_2aae94:
    // 0x2aae94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAE94u;
    {
        const bool branch_taken_0x2aae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE94u;
        // 0x2aae98: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae94) {
            ctx->pc = 0x2AAEA8u;
            goto label_2aaea8;
        }
    }
    ctx->pc = 0x2AAE9Cu;
label_2aae9c:
    // 0x2aae9c: 0xc0aabbc  jal         func_2AAEF0
    ctx->pc = 0x2AAE9Cu;
    SET_GPR_U32(ctx, 31, 0x2AAEA4u);
    ctx->pc = 0x2AAEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAE9Cu;
    // 0x2aaea0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAEF0u, 0x2AAE9Cu, 0x2AAEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAEA4u;
label_2aaea4:
    // 0x2aaea4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2aaea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2aaea8:
    // 0x2aaea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aaea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaeac: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2aaeacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aaeb0: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2AAEB0u;
    {
        const bool branch_taken_0x2aaeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEB0u;
        // 0x2aaeb4: 0x240200ac  addiu       $v0, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaeb0) {
            ctx->pc = 0x2AAD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aad90;
        }
    }
    ctx->pc = 0x2AAEB8u;
label_2aaeb8:
    // 0x2aaeb8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2aaeb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaebc: 0x2a22fffc  slti        $v0, $s1, -0x4
    ctx->pc = 0x2aaebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967292) ? 1 : 0);
    // 0x2aaec0: 0x5040ffab  beql        $v0, $zero, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2AAEC0u;
    {
        const bool branch_taken_0x2aaec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaec0) {
            ctx->pc = 0x2AAEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAEC0u;
            // 0x2aaec4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aad70;
        }
    }
    ctx->pc = 0x2AAEC8u;
    // 0x2aaec8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2aaec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2aaecc:
    // 0x2aaecc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2aaeccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2aaed0:
    // 0x2aaed0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2aaed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aaed4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2aaed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aaed8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2aaed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aaedc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2aaedcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aaee0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2aaee0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aaee4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2aaee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aaee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEE8u;
        // 0x2aaeec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAEF0u;
}
