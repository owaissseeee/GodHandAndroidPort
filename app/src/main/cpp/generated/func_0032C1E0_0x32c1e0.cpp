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

// Function: func_0032C1E0
// Address: 0x32c1e0 - 0x32c2a8
void func_0032C1E0_0x32c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032C1E0_0x32c1e0");
#endif

    switch (ctx->pc) {
        case 0x32c210u: goto label_32c210;
        case 0x32c230u: goto label_32c230;
        case 0x32c24cu: goto label_32c24c;
        case 0x32c264u: goto label_32c264;
        case 0x32c274u: goto label_32c274;
        case 0x32c294u: goto label_32c294;
        default: break;
    }

    ctx->pc = 0x32c1e0u;

    // 0x32c1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32c1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32c1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32c1e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32c1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32c1f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32c1f4: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x32c1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32c1f8: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x32C1F8u;
    {
        const bool branch_taken_0x32c1f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1F8u;
        // 0x32c1fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c1f8) {
            ctx->pc = 0x32C294u;
            goto label_32c294;
        }
    }
    ctx->pc = 0x32C200u;
    // 0x32c200: 0x50800025  beql        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x32C200u;
    {
        const bool branch_taken_0x32c200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c200) {
            ctx->pc = 0x32C204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C200u;
            // 0x32c204: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C298u;
            goto label_32c298;
        }
    }
    ctx->pc = 0x32C208u;
    // 0x32c208: 0xc0c9e0c  jal         func_327830
    ctx->pc = 0x32C208u;
    SET_GPR_U32(ctx, 31, 0x32C210u);
    ctx->pc = 0x327830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327830u, 0x32C208u, 0x32C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C210u;
label_32c210:
    // 0x32c210: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x32c210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x32c214: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x32c214u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x32c218: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32c218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c21c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32c220: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C220u;
    {
        const bool branch_taken_0x32c220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C220u;
        // 0x32c224: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c220) {
            ctx->pc = 0x32C238u;
            goto label_32c238;
        }
    }
    ctx->pc = 0x32C228u;
    // 0x32c228: 0xc0ca112  jal         func_328448
    ctx->pc = 0x32C228u;
    SET_GPR_U32(ctx, 31, 0x32C230u);
    ctx->pc = 0x32C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C228u;
    // 0x32c22c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x32C228u, 0x32C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C230u;
label_32c230:
    // 0x32c230: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x32C230u;
    {
        const bool branch_taken_0x32c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C230u;
        // 0x32c234: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c230) {
            ctx->pc = 0x32C298u;
            goto label_32c298;
        }
    }
    ctx->pc = 0x32C238u;
label_32c238:
    // 0x32c238: 0x8202006c  lb          $v0, 0x6C($s0)
    ctx->pc = 0x32c238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x32c23c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x32C23Cu;
    {
        const bool branch_taken_0x32c23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C23Cu;
        // 0x32c240: 0x24c307ff  addiu       $v1, $a2, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c23c) {
            ctx->pc = 0x32C280u;
            goto label_32c280;
        }
    }
    ctx->pc = 0x32C244u;
    // 0x32c244: 0xc0c9dc2  jal         func_327708
    ctx->pc = 0x32C244u;
    SET_GPR_U32(ctx, 31, 0x32C24Cu);
    ctx->pc = 0x32C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C244u;
    // 0x32c248: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327708u, 0x32C244u, 0x32C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C24Cu;
label_32c24c:
    // 0x32c24c: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x32c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x32c250: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x32c250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32c254: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C254u;
    {
        const bool branch_taken_0x32c254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C254u;
        // 0x32c258: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c254) {
            ctx->pc = 0x32C264u;
            goto label_32c264;
        }
    }
    ctx->pc = 0x32C25Cu;
    // 0x32c25c: 0xc0c9dd6  jal         func_327758
    ctx->pc = 0x32C25Cu;
    SET_GPR_U32(ctx, 31, 0x32C264u);
    ctx->pc = 0x32C260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C25Cu;
    // 0x32c260: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327758u, 0x32C25Cu, 0x32C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C264u;
label_32c264:
    // 0x32c264: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x32c264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x32c268: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32c26c: 0xc0ca112  jal         func_328448
    ctx->pc = 0x32C26Cu;
    SET_GPR_U32(ctx, 31, 0x32C274u);
    ctx->pc = 0x32C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C26Cu;
    // 0x32c270: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x32C26Cu, 0x32C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C274u;
label_32c274:
    // 0x32c274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32C274u;
    {
        const bool branch_taken_0x32c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C274u;
        // 0x32c278: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c274) {
            ctx->pc = 0x32C298u;
            goto label_32c298;
        }
    }
    ctx->pc = 0x32C27Cu;
    // 0x32c27c: 0x0  nop
    ctx->pc = 0x32c27cu;
    // NOP
label_32c280:
    // 0x32c280: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x32c280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x32c284: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x32c284u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x32c288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c28c: 0xc0ca036  jal         func_3280D8
    ctx->pc = 0x32C28Cu;
    SET_GPR_U32(ctx, 31, 0x32C294u);
    ctx->pc = 0x32C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C28Cu;
    // 0x32c290: 0x62ac3  sra         $a1, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3280D8u, 0x32C28Cu, 0x32C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C294u;
label_32c294:
    // 0x32c294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32c294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32c298:
    // 0x32c298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32c298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32c29c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x32C2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2A0u;
        // 0x32c2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C2A8u;
}
