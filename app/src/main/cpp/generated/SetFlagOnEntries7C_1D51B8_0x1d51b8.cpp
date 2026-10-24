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

// Function: SetFlagOnEntries7C_1D51B8
// Address: 0x1d51b8 - 0x1d52a0
void SetFlagOnEntries7C_1D51B8_0x1d51b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlagOnEntries7C_1D51B8_0x1d51b8");
#endif

    switch (ctx->pc) {
        case 0x1d51e8u: goto label_1d51e8;
        case 0x1d51f8u: goto label_1d51f8;
        case 0x1d522cu: goto label_1d522c;
        case 0x1d5248u: goto label_1d5248;
        case 0x1d5258u: goto label_1d5258;
        case 0x1d528cu: goto label_1d528c;
        default: break;
    }

    ctx->pc = 0x1d51b8u;

    // 0x1d51b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d51b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d51bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d51bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d51c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d51c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1d51c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d51c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d51cc: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D51CCu;
    {
        const bool branch_taken_0x1d51cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51CCu;
        // 0x1d51d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51cc) {
            ctx->pc = 0x1D5234u;
            goto label_1d5234;
        }
    }
    ctx->pc = 0x1D51D4u;
    // 0x1d51d4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d51d8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D51D8u;
    {
        const bool branch_taken_0x1d51d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D8u;
        // 0x1d51dc: 0x24f10060  addiu       $s1, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51d8) {
            ctx->pc = 0x1D5210u;
            goto label_1d5210;
        }
    }
    ctx->pc = 0x1D51E0u;
    // 0x1d51e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d51e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51e4: 0x0  nop
    ctx->pc = 0x1d51e4u;
    // NOP
label_1d51e8:
    // 0x1d51e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D51E8u;
    {
        const bool branch_taken_0x1d51e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51E8u;
        // 0x1d51ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51e8) {
            ctx->pc = 0x1D51F8u;
            goto label_1d51f8;
        }
    }
    ctx->pc = 0x1D51F0u;
    // 0x1d51f0: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1D51F0u;
    SET_GPR_U32(ctx, 31, 0x1D51F8u);
    ctx->pc = 0x1D51F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51F0u;
    // 0x1d51f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1D51F0u, 0x1D51F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51F8u;
label_1d51f8:
    // 0x1d51f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d51f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d51fc: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x1d51fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x1d5200: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D5200u;
    {
        const bool branch_taken_0x1d5200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5200u;
        // 0x1d5204: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5200) {
            ctx->pc = 0x1D51E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51e8;
        }
    }
    ctx->pc = 0x1D5208u;
    // 0x1d5208: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D5208u;
    {
        const bool branch_taken_0x1d5208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5208u;
        // 0x1d520c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5208) {
            ctx->pc = 0x1D5290u;
            goto label_1d5290;
        }
    }
    ctx->pc = 0x1D5210u;
label_1d5210:
    // 0x1d5210: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D5210u;
    {
        const bool branch_taken_0x1d5210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5210u;
        // 0x1d5214: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5210) {
            ctx->pc = 0x1D528Cu;
            goto label_1d528c;
        }
    }
    ctx->pc = 0x1D5218u;
    // 0x1d5218: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1d5218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1d521c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1d521cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d5220: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1d5220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1d5224: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1D5224u;
    SET_GPR_U32(ctx, 31, 0x1D522Cu);
    ctx->pc = 0x1D5228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5224u;
    // 0x1d5228: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1D5224u, 0x1D522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D522Cu;
label_1d522c:
    // 0x1d522c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D522Cu;
    {
        const bool branch_taken_0x1d522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D522Cu;
        // 0x1d5230: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d522c) {
            ctx->pc = 0x1D5290u;
            goto label_1d5290;
        }
    }
    ctx->pc = 0x1D5234u;
label_1d5234:
    // 0x1d5234: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d5238: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D5238u;
    {
        const bool branch_taken_0x1d5238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5238u;
        // 0x1d523c: 0x24f10060  addiu       $s1, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5238) {
            ctx->pc = 0x1D5270u;
            goto label_1d5270;
        }
    }
    ctx->pc = 0x1D5240u;
    // 0x1d5240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d5240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5244: 0x0  nop
    ctx->pc = 0x1d5244u;
    // NOP
label_1d5248:
    // 0x1d5248: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5248u;
    {
        const bool branch_taken_0x1d5248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5248u;
        // 0x1d524c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5248) {
            ctx->pc = 0x1D5258u;
            goto label_1d5258;
        }
    }
    ctx->pc = 0x1D5250u;
    // 0x1d5250: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1D5250u;
    SET_GPR_U32(ctx, 31, 0x1D5258u);
    ctx->pc = 0x1D5254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5250u;
    // 0x1d5254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1D5250u, 0x1D5258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5258u;
label_1d5258:
    // 0x1d5258: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d5258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d525c: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x1d525cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x1d5260: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D5260u;
    {
        const bool branch_taken_0x1d5260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5260u;
        // 0x1d5264: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5260) {
            ctx->pc = 0x1D5248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5248;
        }
    }
    ctx->pc = 0x1D5268u;
    // 0x1d5268: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5268u;
    {
        const bool branch_taken_0x1d5268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5268u;
        // 0x1d526c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5268) {
            ctx->pc = 0x1D5290u;
            goto label_1d5290;
        }
    }
    ctx->pc = 0x1D5270u;
label_1d5270:
    // 0x1d5270: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5270u;
    {
        const bool branch_taken_0x1d5270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5270u;
        // 0x1d5274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5270) {
            ctx->pc = 0x1D528Cu;
            goto label_1d528c;
        }
    }
    ctx->pc = 0x1D5278u;
    // 0x1d5278: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1d5278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1d527c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1d527cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d5280: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1d5280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1d5284: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1D5284u;
    SET_GPR_U32(ctx, 31, 0x1D528Cu);
    ctx->pc = 0x1D5288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5284u;
    // 0x1d5288: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1D5284u, 0x1D528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D528Cu;
label_1d528c:
    // 0x1d528c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d528cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d5290:
    // 0x1d5290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5298: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5298u;
        // 0x1d529c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D52A0u;
}
