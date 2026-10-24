#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: Renew_List_Flag__17cSkillListManager8PL_SKILLRUiUiUc
// Address: 0x799b78 - 0x799ca8
void Renew_List_Flag__17cSkillListManager8PL_SKILLRUiUiUc_0x799b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Renew_List_Flag__17cSkillListManager8PL_SKILLRUiUiUc_0x799b78");
#endif

    switch (ctx->pc) {
        case 0x799bdcu: goto label_799bdc;
        case 0x799bf8u: goto label_799bf8;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c40u: goto label_799c40;
        default: break;
    }

    ctx->pc = 0x799b78u;

    // 0x799b78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x799b7c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x799b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799b80: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x799b84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x799b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x799b8c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x799b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799b90: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x799b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x799b94: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x799b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x799b98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799b98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b9c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x799b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x799ba0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x799ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x799ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x799ba8: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x799ba8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x799bac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799bb0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x799bb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799bb8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x799bbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x799bc0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x799bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x799bc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799bc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799BC8u;
    {
        const bool branch_taken_0x799bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC8u;
        // 0x799bcc: 0x3c140057  lui         $s4, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc8) {
            ctx->pc = 0x799BF8u;
            goto label_799bf8;
        }
    }
    ctx->pc = 0x799BD0u;
    // 0x799bd0: 0x26939b70  addiu       $s3, $s4, -0x6490
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    // 0x799bd4: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x799BD4u;
    SET_GPR_U32(ctx, 31, 0x799BDCu);
    ctx->pc = 0x799BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BD4u;
    // 0x799bd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x799BD4u, 0x799BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BDCu;
label_799bdc:
    // 0x799bdc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799be0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799BE0u;
    {
        const bool branch_taken_0x799be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE0u;
        // 0x799be4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799be0) {
            ctx->pc = 0x799BFCu;
            goto label_799bfc;
        }
    }
    ctx->pc = 0x799BE8u;
    // 0x799be8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bf0: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x799BF0u;
    SET_GPR_U32(ctx, 31, 0x799BF8u);
    ctx->pc = 0x799BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF0u;
    // 0x799bf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x799BF0u, 0x799BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF8u;
label_799bf8:
    // 0x799bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799bfc:
    // 0x799bfc: 0x16a2000e  bne         $s5, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799BFCu;
    {
        const bool branch_taken_0x799bfc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x799C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BFCu;
        // 0x799c00: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bfc) {
            ctx->pc = 0x799C38u;
            goto label_799c38;
        }
    }
    ctx->pc = 0x799C04u;
    // 0x799c04: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x799C04u;
    SET_GPR_U32(ctx, 31, 0x799C0Cu);
    ctx->pc = 0x799C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C04u;
    // 0x799c08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x799C04u, 0x799C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C0Cu;
label_799c0c:
    // 0x799c0c: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x799C0Cu;
    {
        const bool branch_taken_0x799c0c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C0Cu;
        // 0x799c10: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c0c) {
            ctx->pc = 0x799C7Cu;
            goto label_799c7c;
        }
    }
    ctx->pc = 0x799C14u;
    // 0x799c14: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x799c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x799c18: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x799c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x799c1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x799c20: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x799c24: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x799c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x799c28: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x799C28u;
    {
        const bool branch_taken_0x799c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799c28) {
            ctx->pc = 0x799C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C28u;
            // 0x799c2c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C80u;
            goto label_799c80;
        }
    }
    ctx->pc = 0x799C30u;
    // 0x799c30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x799C30u;
    {
        const bool branch_taken_0x799c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C30u;
        // 0x799c34: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c30) {
            ctx->pc = 0x799C68u;
            goto label_799c68;
        }
    }
    ctx->pc = 0x799C38u;
label_799c38:
    // 0x799c38: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x799C38u;
    SET_GPR_U32(ctx, 31, 0x799C40u);
    ctx->pc = 0x799C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C38u;
    // 0x799c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x799C38u, 0x799C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C40u;
label_799c40:
    // 0x799c40: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799C40u;
    {
        const bool branch_taken_0x799c40 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C40u;
        // 0x799c44: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c40) {
            ctx->pc = 0x799C7Cu;
            goto label_799c7c;
        }
    }
    ctx->pc = 0x799C48u;
    // 0x799c48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x799c4c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x799c4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x799c50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x799c54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x799c58: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x799c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x799c5c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x799C5Cu;
    {
        const bool branch_taken_0x799c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c5c) {
            ctx->pc = 0x799C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C5Cu;
            // 0x799c60: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C80u;
            goto label_799c80;
        }
    }
    ctx->pc = 0x799C64u;
    // 0x799c64: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_799c68:
    // 0x799c68: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x799c6c: 0xa0500014  sb          $s0, 0x14($v0)
    ctx->pc = 0x799c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 16));
    // 0x799c70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799c74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799c78: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x799c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_799c7c:
    // 0x799c7c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799c80:
    // 0x799c80: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799c84: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799c88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799c8c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x799c8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799c90: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x799c90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799c94: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x799c94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x799C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C9Cu;
        // 0x799ca0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799CA4u;
    // 0x799ca4: 0x0  nop
    ctx->pc = 0x799ca4u;
    // NOP
    ctx->pc = 0x799ca8u;
}
} // namespace gh_r000
