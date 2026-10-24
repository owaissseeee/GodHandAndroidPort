#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r007_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r007
{
// Function: __do_global_ctors
// Address: 0x799b50 - 0x799c00
void ps2___do_global_ctors_0x799b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799b50");
#endif

    switch (ctx->pc) {
        case 0x799b50u: goto label_799b50;
        case 0x799b54u: goto label_799b54;
        case 0x799b58u: goto label_799b58;
        case 0x799b5cu: goto label_799b5c;
        case 0x799b60u: goto label_799b60;
        case 0x799b64u: goto label_799b64;
        case 0x799b68u: goto label_799b68;
        case 0x799b6cu: goto label_799b6c;
        case 0x799b70u: goto label_799b70;
        case 0x799b74u: goto label_799b74;
        case 0x799b78u: goto label_799b78;
        case 0x799b7cu: goto label_799b7c;
        case 0x799b80u: goto label_799b80;
        case 0x799b84u: goto label_799b84;
        case 0x799b88u: goto label_799b88;
        case 0x799b8cu: goto label_799b8c;
        case 0x799b90u: goto label_799b90;
        case 0x799b94u: goto label_799b94;
        case 0x799b98u: goto label_799b98;
        case 0x799b9cu: goto label_799b9c;
        case 0x799ba0u: goto label_799ba0;
        case 0x799ba4u: goto label_799ba4;
        case 0x799ba8u: goto label_799ba8;
        case 0x799bacu: goto label_799bac;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb4u: goto label_799bb4;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bbcu: goto label_799bbc;
        case 0x799bc0u: goto label_799bc0;
        case 0x799bc4u: goto label_799bc4;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bd4u: goto label_799bd4;
        case 0x799bd8u: goto label_799bd8;
        case 0x799bdcu: goto label_799bdc;
        case 0x799be0u: goto label_799be0;
        case 0x799be4u: goto label_799be4;
        case 0x799be8u: goto label_799be8;
        case 0x799becu: goto label_799bec;
        case 0x799bf0u: goto label_799bf0;
        case 0x799bf4u: goto label_799bf4;
        case 0x799bf8u: goto label_799bf8;
        case 0x799bfcu: goto label_799bfc;
        default: break;
    }

    ctx->pc = 0x799b50u;

label_799b50:
    // 0x799b50: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799b54:
    // 0x799b54: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799b58:
    // 0x799b58: 0x8ce59d80  lw          $a1, -0x6280($a3)
    ctx->pc = 0x799b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294942080)));
label_799b5c:
    // 0x799b5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799b60:
    // 0x799b60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799b64:
    // 0x799b64: 0x24e39d80  addiu       $v1, $a3, -0x6280
    ctx->pc = 0x799b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942080));
label_799b68:
    // 0x799b68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799b6c:
    // 0x799b6c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799b70:
    if (ctx->pc == 0x799B70u) {
        ctx->pc = 0x799B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B6Cu;
        // 0x799b70: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B74u;
        goto label_799b74;
    }
    ctx->pc = 0x799B6Cu;
    {
        const bool branch_taken_0x799b6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B6Cu;
        // 0x799b70: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b6c) {
            ctx->pc = 0x799BB4u;
            goto label_799bb4;
        }
    }
    ctx->pc = 0x799B74u;
label_799b74:
    // 0x799b74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799b78:
    // 0x799b78: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799b7c:
    if (ctx->pc == 0x799B7Cu) {
        ctx->pc = 0x799B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B78u;
        // 0x799b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B80u;
        goto label_799b80;
    }
    ctx->pc = 0x799B78u;
    {
        const bool branch_taken_0x799b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B78u;
        // 0x799b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b78) {
            ctx->pc = 0x799BB4u;
            goto label_799bb4;
        }
    }
    ctx->pc = 0x799B80u;
label_799b80:
    // 0x799b80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799b84:
    // 0x799b84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x799b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799b88:
    // 0x799b88: 0x24e49d80  addiu       $a0, $a3, -0x6280
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942080));
label_799b8c:
    // 0x799b8c: 0x0  nop
    ctx->pc = 0x799b8cu;
    // NOP
label_799b90:
    // 0x799b90: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799b90u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_799b94:
    // 0x799b94: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799b98:
    // 0x799b98: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799b9c:
    // 0x799b9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799b9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799ba0:
    // 0x799ba0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799ba4:
    // 0x799ba4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799ba8:
    // 0x799ba8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799bac:
    // 0x799bac: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799bb0:
    if (ctx->pc == 0x799BB0u) {
        ctx->pc = 0x799BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BACu;
        // 0x799bb0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BB4u;
        goto label_799bb4;
    }
    ctx->pc = 0x799BACu;
    {
        const bool branch_taken_0x799bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799bac) {
            ctx->pc = 0x799BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BACu;
            // 0x799bb0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b90;
        }
    }
    ctx->pc = 0x799BB4u;
label_799bb4:
    // 0x799bb4: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799bb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799bb8:
    // 0x799bb8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799bb8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799bbc:
    // 0x799bbc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799bc0:
    if (ctx->pc == 0x799BC0u) {
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BC4u;
        goto label_799bc4;
    }
    ctx->pc = 0x799BBCu;
    {
        const bool branch_taken_0x799bbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bbc) {
            ctx->pc = 0x799BECu;
            goto label_799bec;
        }
    }
    ctx->pc = 0x799BC4u;
label_799bc4:
    // 0x799bc4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799bc8:
    // 0x799bc8: 0x24429d80  addiu       $v0, $v0, -0x6280
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942080));
label_799bcc:
    // 0x799bcc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799bd0:
    // 0x799bd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799bd4:
    // 0x799bd4: 0x0  nop
    ctx->pc = 0x799bd4u;
    // NOP
label_799bd8:
    // 0x799bd8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799bdc:
    // 0x799bdc: 0x40f809  jalr        $v0
label_799be0:
    if (ctx->pc == 0x799BE0u) {
        ctx->pc = 0x799BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BDCu;
        // 0x799be0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BE4u;
        goto label_799be4;
    }
    ctx->pc = 0x799BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799BE4u);
        ctx->pc = 0x799BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BDCu;
        // 0x799be0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BDCu, 0x799BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799BE4u;
label_799be4:
    // 0x799be4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799be8:
    if (ctx->pc == 0x799BE8u) {
        ctx->pc = 0x799BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE4u;
        // 0x799be8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BECu;
        goto label_799bec;
    }
    ctx->pc = 0x799BE4u;
    {
        const bool branch_taken_0x799be4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799be4) {
            ctx->pc = 0x799BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BE4u;
            // 0x799be8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bd8;
        }
    }
    ctx->pc = 0x799BECu;
label_799bec:
    // 0x799bec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799bf0:
    // 0x799bf0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799bf4:
    // 0x799bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799bf8:
    // 0x799bf8: 0x3e00008  jr          $ra
label_799bfc:
    if (ctx->pc == 0x799BFCu) {
        ctx->pc = 0x799BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF8u;
        // 0x799bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C00u;
        goto label_fallthrough_0x799bf8;
    }
    ctx->pc = 0x799BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF8u;
        // 0x799bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799bf8:
    ctx->pc = 0x799C00u;
}
} // namespace gh_r007
