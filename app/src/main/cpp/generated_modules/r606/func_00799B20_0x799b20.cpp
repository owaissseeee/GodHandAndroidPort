#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: func_00799B20
// Address: 0x799b20 - 0x799c58
void func_00799B20_0x799b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799B20_0x799b20");
#endif

    switch (ctx->pc) {
        case 0x799b48u: goto label_799b48;
        case 0x799b54u: goto label_799b54;
        case 0x799b64u: goto label_799b64;
        case 0x799b7cu: goto label_799b7c;
        case 0x799b80u: goto label_799b80;
        case 0x799b90u: goto label_799b90;
        case 0x799b98u: goto label_799b98;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bd0u: goto label_799bd0;
        case 0x799be4u: goto label_799be4;
        case 0x799c04u: goto label_799c04;
        case 0x799c14u: goto label_799c14;
        case 0x799c28u: goto label_799c28;
        case 0x799c38u: goto label_799c38;
        default: break;
    }

    ctx->pc = 0x799b20u;

    // 0x799b20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799b24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799b28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799b2c: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799b30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799b34: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x799b38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799b3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799B3Cu;
    {
        const bool branch_taken_0x799b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B3Cu;
        // 0x799b40: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b3c) {
            ctx->pc = 0x799B54u;
            goto label_799b54;
        }
    }
    ctx->pc = 0x799B44u;
    // 0x799b44: 0x0  nop
    ctx->pc = 0x799b44u;
    // NOP
label_799b48:
    // 0x799b48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b4c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B4Cu;
    SET_GPR_U32(ctx, 31, 0x799B54u);
    ctx->pc = 0x799B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B4Cu;
    // 0x799b50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B4Cu, 0x799B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B54u;
label_799b54:
    // 0x799b54: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x799b58: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799b5c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799B5Cu;
    SET_GPR_U32(ctx, 31, 0x799B64u);
    ctx->pc = 0x799B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B5Cu;
    // 0x799b60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799B5Cu, 0x799B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B64u;
label_799b64:
    // 0x799b64: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799B64u;
    {
        const bool branch_taken_0x799b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B64u;
        // 0x799b68: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b64) {
            ctx->pc = 0x799B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b48;
        }
    }
    ctx->pc = 0x799B6Cu;
    // 0x799b6c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799b70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b74: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B74u;
    SET_GPR_U32(ctx, 31, 0x799B7Cu);
    ctx->pc = 0x799B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B74u;
    // 0x799b78: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B74u, 0x799B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B7Cu;
label_799b7c:
    // 0x799b7c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x799b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_799b80:
    // 0x799b80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b84: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799b84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799b88: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799B88u;
    SET_GPR_U32(ctx, 31, 0x799B90u);
    ctx->pc = 0x799B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B88u;
    // 0x799b8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799B88u, 0x799B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B90u;
label_799b90:
    // 0x799b90: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799B90u;
    SET_GPR_U32(ctx, 31, 0x799B98u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799B90u, 0x799B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B98u;
label_799b98:
    // 0x799b98: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799b9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799ba4: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799ba8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799bac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799bb0: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799BB0u;
    SET_GPR_U32(ctx, 31, 0x799BB8u);
    ctx->pc = 0x799BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BB0u;
    // 0x799bb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799BB0u, 0x799BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BB8u;
label_799bb8:
    // 0x799bb8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x799bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x799bbc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x799BBCu;
    {
        const bool branch_taken_0x799bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bbc) {
            ctx->pc = 0x799B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b80;
        }
    }
    ctx->pc = 0x799BC4u;
    // 0x799bc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799bc8:
    // 0x799bc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bcc: 0x0  nop
    ctx->pc = 0x799bccu;
    // NOP
label_799bd0:
    // 0x799bd0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x799bd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bd8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799bdc: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799BDCu;
    SET_GPR_U32(ctx, 31, 0x799BE4u);
    ctx->pc = 0x799BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BDCu;
    // 0x799be0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799BDCu, 0x799BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BE4u;
label_799be4:
    // 0x799be4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799be8: 0x2a040002  slti        $a0, $s0, 0x2
    ctx->pc = 0x799be8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x799bec: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799BECu;
    {
        const bool branch_taken_0x799bec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BECu;
        // 0x799bf0: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bec) {
            ctx->pc = 0x799BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bd0;
        }
    }
    ctx->pc = 0x799BF4u;
    // 0x799bf4: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x799bf8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799bfc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799BFCu;
    SET_GPR_U32(ctx, 31, 0x799C04u);
    ctx->pc = 0x799C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BFCu;
    // 0x799c00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799BFCu, 0x799C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C04u;
label_799c04:
    // 0x799c04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799C04u;
    {
        const bool branch_taken_0x799c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c04) {
            ctx->pc = 0x799C14u;
            goto label_799c14;
        }
    }
    ctx->pc = 0x799C0Cu;
    // 0x799c0c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799C0Cu;
    SET_GPR_U32(ctx, 31, 0x799C14u);
    ctx->pc = 0x799C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C0Cu;
    // 0x799c10: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799C0Cu, 0x799C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C14u;
label_799c14:
    // 0x799c14: 0x1e200006  bgtz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799C14u;
    {
        const bool branch_taken_0x799c14 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x799C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C14u;
        // 0x799c18: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c14) {
            ctx->pc = 0x799C30u;
            goto label_799c30;
        }
    }
    ctx->pc = 0x799C1Cu;
    // 0x799c1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c20: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799C20u;
    SET_GPR_U32(ctx, 31, 0x799C28u);
    ctx->pc = 0x799C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C20u;
    // 0x799c24: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799C20u, 0x799C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C28u;
label_799c28:
    // 0x799c28: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x799C28u;
    {
        const bool branch_taken_0x799c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C28u;
        // 0x799c2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c28) {
            ctx->pc = 0x799BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bc8;
        }
    }
    ctx->pc = 0x799C30u;
label_799c30:
    // 0x799c30: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799C30u;
    SET_GPR_U32(ctx, 31, 0x799C38u);
    ctx->pc = 0x799C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C30u;
    // 0x799c34: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799C30u, 0x799C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C38u;
label_799c38:
    // 0x799c38: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799c3c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799c40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799c44: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x799C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C4Cu;
        // 0x799c50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C54u;
    // 0x799c54: 0x0  nop
    ctx->pc = 0x799c54u;
    // NOP
    ctx->pc = 0x799c58u;
}
} // namespace gh_r606
