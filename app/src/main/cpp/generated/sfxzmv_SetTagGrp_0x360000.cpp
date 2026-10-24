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

// Function: sfxzmv_SetTagGrp
// Address: 0x360000 - 0x3600e8
void sfxzmv_SetTagGrp_0x360000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfxzmv_SetTagGrp_0x360000");
#endif

    switch (ctx->pc) {
        case 0x360088u: goto label_360088;
        case 0x3600b4u: goto label_3600b4;
        default: break;
    }

    ctx->pc = 0x360000u;

    // 0x360000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x360000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x360004: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x360004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360008: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x360008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x36000c: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x36000cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x360010: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x360010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x360014: 0x24540028  addiu       $s4, $v0, 0x28
    ctx->pc = 0x360014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x360018: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x360018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x36001c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x36001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x360020: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x360020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x360024: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x360024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x360028: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x360028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x36002c: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x36002cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x360030: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x360030u;
    {
        const bool branch_taken_0x360030 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x360034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360030u;
        // 0x360034: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360030) {
            ctx->pc = 0x360058u;
            goto label_360058;
        }
    }
    ctx->pc = 0x360038u;
    // 0x360038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x360038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36003c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x36003cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x360040: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x360040u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x360044: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x360044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x360048: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x360048u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x36004c: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x36004cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x360050: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x360050u;
    {
        const bool branch_taken_0x360050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360050u;
        // 0x360054: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360050) {
            ctx->pc = 0x3600C8u;
            goto label_3600c8;
        }
    }
    ctx->pc = 0x360058u;
label_360058:
    // 0x360058: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x360058u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x36005c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x36005cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x360060: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x360060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x360064: 0x2610a068  addiu       $s0, $s0, -0x5F98
    ctx->pc = 0x360064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942824));
    // 0x360068: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x360068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x36006c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36006cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360070: 0x24a5a060  addiu       $a1, $a1, -0x5FA0
    ctx->pc = 0x360070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942816));
    // 0x360074: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x360074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360078: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x360078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x36007c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x36007cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360080: 0xc0ceb7e  jal         func_33ADF8
    ctx->pc = 0x360080u;
    SET_GPR_U32(ctx, 31, 0x360088u);
    ctx->pc = 0x360084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360080u;
    // 0x360084: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ADF8u, 0x360080u, 0x360088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360088u;
label_360088:
    // 0x360088: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x360088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36008c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x36008cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x360090: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x360090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x360094: 0x24a5a070  addiu       $a1, $a1, -0x5F90
    ctx->pc = 0x360094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942832));
    // 0x360098: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x360098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x36009c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36009cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600a0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3600a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x3600a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3600a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600a8: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x3600a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x3600ac: 0xc0ceb7e  jal         func_33ADF8
    ctx->pc = 0x3600ACu;
    SET_GPR_U32(ctx, 31, 0x3600B4u);
    ctx->pc = 0x3600B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3600ACu;
    // 0x3600b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ADF8u, 0x3600ACu, 0x3600B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3600B4u;
label_3600b4:
    // 0x3600b4: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x3600b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x3600b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3600b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3600bc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3600bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3600c0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3600c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x3600c4: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3600c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_3600c8:
    // 0x3600c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3600c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3600cc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3600ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3600d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3600d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3600d4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3600d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3600d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3600d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3600dc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3600dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3600e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3600E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3600E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3600E0u;
        // 0x3600e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3600E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3600E8u;
}
