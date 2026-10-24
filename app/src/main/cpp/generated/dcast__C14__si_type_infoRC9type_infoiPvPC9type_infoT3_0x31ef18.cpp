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

// Function: dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3
// Address: 0x31ef18 - 0x31efb0
void dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3_0x31ef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3_0x31ef18");
#endif

    switch (ctx->pc) {
        case 0x31ef18u: goto label_31ef18;
        case 0x31ef1cu: goto label_31ef1c;
        case 0x31ef20u: goto label_31ef20;
        case 0x31ef24u: goto label_31ef24;
        case 0x31ef28u: goto label_31ef28;
        case 0x31ef2cu: goto label_31ef2c;
        case 0x31ef30u: goto label_31ef30;
        case 0x31ef34u: goto label_31ef34;
        case 0x31ef38u: goto label_31ef38;
        case 0x31ef3cu: goto label_31ef3c;
        case 0x31ef40u: goto label_31ef40;
        case 0x31ef44u: goto label_31ef44;
        case 0x31ef48u: goto label_31ef48;
        case 0x31ef4cu: goto label_31ef4c;
        case 0x31ef50u: goto label_31ef50;
        case 0x31ef54u: goto label_31ef54;
        case 0x31ef58u: goto label_31ef58;
        case 0x31ef5cu: goto label_31ef5c;
        case 0x31ef60u: goto label_31ef60;
        case 0x31ef64u: goto label_31ef64;
        case 0x31ef68u: goto label_31ef68;
        case 0x31ef6cu: goto label_31ef6c;
        case 0x31ef70u: goto label_31ef70;
        case 0x31ef74u: goto label_31ef74;
        case 0x31ef78u: goto label_31ef78;
        case 0x31ef7cu: goto label_31ef7c;
        case 0x31ef80u: goto label_31ef80;
        case 0x31ef84u: goto label_31ef84;
        case 0x31ef88u: goto label_31ef88;
        case 0x31ef8cu: goto label_31ef8c;
        case 0x31ef90u: goto label_31ef90;
        case 0x31ef94u: goto label_31ef94;
        case 0x31ef98u: goto label_31ef98;
        case 0x31ef9cu: goto label_31ef9c;
        case 0x31efa0u: goto label_31efa0;
        case 0x31efa4u: goto label_31efa4;
        case 0x31efa8u: goto label_31efa8;
        case 0x31efacu: goto label_31efac;
        default: break;
    }

    ctx->pc = 0x31ef18u;

label_31ef18:
    // 0x31ef18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31ef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31ef1c:
    // 0x31ef1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x31ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_31ef20:
    // 0x31ef20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ef20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31ef24:
    // 0x31ef24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31ef24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31ef28:
    // 0x31ef28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x31ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_31ef2c:
    // 0x31ef2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ef2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ef30:
    // 0x31ef30: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x31ef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_31ef34:
    // 0x31ef34: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x31ef34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31ef38:
    // 0x31ef38: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x31ef38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_31ef3c:
    // 0x31ef3c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x31ef3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_31ef40:
    // 0x31ef40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31ef40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_31ef44:
    // 0x31ef44: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31ef44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31ef48:
    // 0x31ef48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_31ef4c:
    // 0x31ef4c: 0xc0c7b90  jal         func_31EE40
label_31ef50:
    if (ctx->pc == 0x31EF50u) {
        ctx->pc = 0x31EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF4Cu;
        // 0x31ef50: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF54u;
        goto label_31ef54;
    }
    ctx->pc = 0x31EF4Cu;
    SET_GPR_U32(ctx, 31, 0x31EF54u);
    ctx->pc = 0x31EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF4Cu;
    // 0x31ef50: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE40u, 0x31EF4Cu, 0x31EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF54u;
label_31ef54:
    // 0x31ef54: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_31ef58:
    if (ctx->pc == 0x31EF58u) {
        ctx->pc = 0x31EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF54u;
        // 0x31ef58: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF5Cu;
        goto label_31ef5c;
    }
    ctx->pc = 0x31EF54u;
    {
        const bool branch_taken_0x31ef54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF54u;
        // 0x31ef58: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef54) {
            ctx->pc = 0x31EF88u;
            goto label_31ef88;
        }
    }
    ctx->pc = 0x31EF5Cu;
label_31ef5c:
    // 0x31ef5c: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x31ef5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31ef60:
    // 0x31ef60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31ef60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ef64:
    // 0x31ef64: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31ef64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31ef68:
    // 0x31ef68: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31ef68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31ef6c:
    // 0x31ef6c: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x31ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_31ef70:
    // 0x31ef70: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x31ef70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31ef74:
    // 0x31ef74: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x31ef74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31ef78:
    // 0x31ef78: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x31ef78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_31ef7c:
    // 0x31ef7c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x31ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_31ef80:
    // 0x31ef80: 0x40f809  jalr        $v0
label_31ef84:
    if (ctx->pc == 0x31EF84u) {
        ctx->pc = 0x31EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF80u;
        // 0x31ef84: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF88u;
        goto label_31ef88;
    }
    ctx->pc = 0x31EF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31EF88u);
        ctx->pc = 0x31EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF80u;
        // 0x31ef84: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EF80u, 0x31EF88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31EF88u;
label_31ef88:
    // 0x31ef88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31ef88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_31ef8c:
    // 0x31ef8c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x31ef8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31ef90:
    // 0x31ef90: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x31ef90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31ef94:
    // 0x31ef94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x31ef94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31ef98:
    // 0x31ef98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31ef98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31ef9c:
    // 0x31ef9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x31ef9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31efa0:
    // 0x31efa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31efa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31efa4:
    // 0x31efa4: 0x3e00008  jr          $ra
label_31efa8:
    if (ctx->pc == 0x31EFA8u) {
        ctx->pc = 0x31EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFA4u;
        // 0x31efa8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EFACu;
        goto label_31efac;
    }
    ctx->pc = 0x31EFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFA4u;
        // 0x31efa8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EFACu;
label_31efac:
    // 0x31efac: 0x0  nop
    ctx->pc = 0x31efacu;
    // NOP
    ctx->pc = 0x31efb0u;
}
