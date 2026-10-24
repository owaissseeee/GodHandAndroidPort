#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcGetSlotMax
// Address: 0x7cd6f8 - 0x7cd7b8
void sceMcGetSlotMax_0x7cd6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcGetSlotMax_0x7cd6f8");
#endif

    switch (ctx->pc) {
        case 0x7cd738u: goto label_7cd738;
        case 0x7cd778u: goto label_7cd778;
        case 0x7cd788u: goto label_7cd788;
        case 0x7cd798u: goto label_7cd798;
        default: break;
    }

    ctx->pc = 0x7cd6f8u;

    // 0x7cd6f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7cd6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7cd6fc: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cd6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cd700: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cd700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cd704: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cd704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cd708: 0x24721980  addiu       $s2, $v1, 0x1980
    ctx->pc = 0x7cd708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 6528));
    // 0x7cd70c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x7cd70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x7cd710: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7cd710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7cd714: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cd714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cd718: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x7cd718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cd71c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CD71Cu;
    {
        const bool branch_taken_0x7cd71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD71Cu;
        // 0x7cd720: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd71c) {
            ctx->pc = 0x7CD72Cu;
            goto label_7cd72c;
        }
    }
    ctx->pc = 0x7CD724u;
    // 0x7cd724: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x7CD724u;
    {
        const bool branch_taken_0x7cd724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD724u;
        // 0x7cd728: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd724) {
            ctx->pc = 0x7CD79Cu;
            goto label_7cd79c;
        }
    }
    ctx->pc = 0x7CD72Cu;
label_7cd72c:
    // 0x7cd72c: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7cd72cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7cd730: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CD730u;
    SET_GPR_U32(ctx, 31, 0x7CD738u);
    ctx->pc = 0x7CD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD730u;
    // 0x7cd734: 0x8e0407b4  lw          $a0, 0x7B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CD730u, 0x7CD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD738u;
label_7cd738:
    // 0x7cd738: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CD738u;
    {
        const bool branch_taken_0x7cd738 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD738u;
        // 0x7cd73c: 0x3c07007d  lui         $a3, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd738) {
            ctx->pc = 0x7CD748u;
            goto label_7cd748;
        }
    }
    ctx->pc = 0x7CD740u;
    // 0x7cd740: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x7CD740u;
    {
        const bool branch_taken_0x7cd740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD740u;
        // 0x7cd744: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd740) {
            ctx->pc = 0x7CD79Cu;
            goto label_7cd79c;
        }
    }
    ctx->pc = 0x7CD748u;
label_7cd748:
    // 0x7cd748: 0x3c13007d  lui         $s3, 0x7D
    ctx->pc = 0x7cd748u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)125 << 16));
    // 0x7cd74c: 0x24e71a00  addiu       $a3, $a3, 0x1A00
    ctx->pc = 0x7cd74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6656));
    // 0x7cd750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7cd750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd754: 0xacf10004  sw          $s1, 0x4($a3)
    ctx->pc = 0x7cd754u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 17));
    // 0x7cd758: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x7cd758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x7cd75c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7cd75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7cd760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7cd760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd764: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7cd764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7cd768: 0x26692f40  addiu       $t1, $s3, 0x2F40
    ctx->pc = 0x7cd768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 12096));
    // 0x7cd76c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x7cd76cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7cd770: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CD770u;
    SET_GPR_U32(ctx, 31, 0x7CD778u);
    ctx->pc = 0x7CD774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD770u;
    // 0x7cd774: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CD770u, 0x7CD778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD778u;
label_7cd778:
    // 0x7cd778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CD778u;
    {
        const bool branch_taken_0x7cd778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cd778) {
            ctx->pc = 0x7CD790u;
            goto label_7cd790;
        }
    }
    ctx->pc = 0x7CD780u;
    // 0x7cd780: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CD780u;
    SET_GPR_U32(ctx, 31, 0x7CD788u);
    ctx->pc = 0x7CD784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD780u;
    // 0x7cd784: 0x8e0407b4  lw          $a0, 0x7B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CD780u, 0x7CD788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD788u;
label_7cd788:
    // 0x7cd788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD788u;
    {
        const bool branch_taken_0x7cd788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD788u;
        // 0x7cd78c: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd788) {
            ctx->pc = 0x7CD79Cu;
            goto label_7cd79c;
        }
    }
    ctx->pc = 0x7CD790u;
label_7cd790:
    // 0x7cd790: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CD790u;
    SET_GPR_U32(ctx, 31, 0x7CD798u);
    ctx->pc = 0x7CD794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD790u;
    // 0x7cd794: 0x8e0407b4  lw          $a0, 0x7B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CD790u, 0x7CD798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD798u;
label_7cd798:
    // 0x7cd798: 0x8e622f40  lw          $v0, 0x2F40($s3)
    ctx->pc = 0x7cd798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12096)));
label_7cd79c:
    // 0x7cd79c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x7cd79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cd7a0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7cd7a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cd7a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cd7a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cd7a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cd7a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cd7ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cd7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cd7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CD7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CD7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD7B0u;
        // 0x7cd7b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CD7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CD7B8u;
}
} // namespace gh_mcport
