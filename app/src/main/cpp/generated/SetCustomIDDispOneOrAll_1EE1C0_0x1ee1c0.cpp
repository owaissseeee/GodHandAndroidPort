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

// Function: SetCustomIDDispOneOrAll_1EE1C0
// Address: 0x1ee1c0 - 0x1ee2a8
void SetCustomIDDispOneOrAll_1EE1C0_0x1ee1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCustomIDDispOneOrAll_1EE1C0_0x1ee1c0");
#endif

    switch (ctx->pc) {
        case 0x1ee1f0u: goto label_1ee1f0;
        case 0x1ee200u: goto label_1ee200;
        case 0x1ee234u: goto label_1ee234;
        case 0x1ee250u: goto label_1ee250;
        case 0x1ee260u: goto label_1ee260;
        case 0x1ee294u: goto label_1ee294;
        default: break;
    }

    ctx->pc = 0x1ee1c0u;

    // 0x1ee1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee1c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ee1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee1c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ee1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ee1cc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ee1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee1d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee1d4: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EE1D4u;
    {
        const bool branch_taken_0x1ee1d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1D4u;
        // 0x1ee1d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1d4) {
            ctx->pc = 0x1EE23Cu;
            goto label_1ee23c;
        }
    }
    ctx->pc = 0x1EE1DCu;
    // 0x1ee1dc: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1ee1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ee1e0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EE1E0u;
    {
        const bool branch_taken_0x1ee1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1E0u;
        // 0x1ee1e4: 0x24f10060  addiu       $s1, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1e0) {
            ctx->pc = 0x1EE218u;
            goto label_1ee218;
        }
    }
    ctx->pc = 0x1EE1E8u;
    // 0x1ee1e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee1ec: 0x0  nop
    ctx->pc = 0x1ee1ecu;
    // NOP
label_1ee1f0:
    // 0x1ee1f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE1F0u;
    {
        const bool branch_taken_0x1ee1f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1F0u;
        // 0x1ee1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1f0) {
            ctx->pc = 0x1EE200u;
            goto label_1ee200;
        }
    }
    ctx->pc = 0x1EE1F8u;
    // 0x1ee1f8: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1EE1F8u;
    SET_GPR_U32(ctx, 31, 0x1EE200u);
    ctx->pc = 0x1EE1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1F8u;
    // 0x1ee1fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1EE1F8u, 0x1EE200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE200u;
label_1ee200:
    // 0x1ee200: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ee200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ee204: 0x2a02001d  slti        $v0, $s0, 0x1D
    ctx->pc = 0x1ee204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1ee208: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EE208u;
    {
        const bool branch_taken_0x1ee208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE208u;
        // 0x1ee20c: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee208) {
            ctx->pc = 0x1EE1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee1f0;
        }
    }
    ctx->pc = 0x1EE210u;
    // 0x1ee210: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1EE210u;
    {
        const bool branch_taken_0x1ee210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE210u;
        // 0x1ee214: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee210) {
            ctx->pc = 0x1EE298u;
            goto label_1ee298;
        }
    }
    ctx->pc = 0x1EE218u;
label_1ee218:
    // 0x1ee218: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EE218u;
    {
        const bool branch_taken_0x1ee218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE218u;
        // 0x1ee21c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee218) {
            ctx->pc = 0x1EE294u;
            goto label_1ee294;
        }
    }
    ctx->pc = 0x1EE220u;
    // 0x1ee220: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1ee220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1ee224: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1ee224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ee228: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1ee228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ee22c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1EE22Cu;
    SET_GPR_U32(ctx, 31, 0x1EE234u);
    ctx->pc = 0x1EE230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE22Cu;
    // 0x1ee230: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1EE22Cu, 0x1EE234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE234u;
label_1ee234:
    // 0x1ee234: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1EE234u;
    {
        const bool branch_taken_0x1ee234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE234u;
        // 0x1ee238: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee234) {
            ctx->pc = 0x1EE298u;
            goto label_1ee298;
        }
    }
    ctx->pc = 0x1EE23Cu;
label_1ee23c:
    // 0x1ee23c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1ee23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ee240: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EE240u;
    {
        const bool branch_taken_0x1ee240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE240u;
        // 0x1ee244: 0x24f10060  addiu       $s1, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee240) {
            ctx->pc = 0x1EE278u;
            goto label_1ee278;
        }
    }
    ctx->pc = 0x1EE248u;
    // 0x1ee248: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee24c: 0x0  nop
    ctx->pc = 0x1ee24cu;
    // NOP
label_1ee250:
    // 0x1ee250: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE250u;
    {
        const bool branch_taken_0x1ee250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE250u;
        // 0x1ee254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee250) {
            ctx->pc = 0x1EE260u;
            goto label_1ee260;
        }
    }
    ctx->pc = 0x1EE258u;
    // 0x1ee258: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1EE258u;
    SET_GPR_U32(ctx, 31, 0x1EE260u);
    ctx->pc = 0x1EE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE258u;
    // 0x1ee25c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1EE258u, 0x1EE260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE260u;
label_1ee260:
    // 0x1ee260: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ee260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ee264: 0x2a02001d  slti        $v0, $s0, 0x1D
    ctx->pc = 0x1ee264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1ee268: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EE268u;
    {
        const bool branch_taken_0x1ee268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE268u;
        // 0x1ee26c: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee268) {
            ctx->pc = 0x1EE250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE270u;
    // 0x1ee270: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE270u;
    {
        const bool branch_taken_0x1ee270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE270u;
        // 0x1ee274: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee270) {
            ctx->pc = 0x1EE298u;
            goto label_1ee298;
        }
    }
    ctx->pc = 0x1EE278u;
label_1ee278:
    // 0x1ee278: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE278u;
    {
        const bool branch_taken_0x1ee278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE278u;
        // 0x1ee27c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee278) {
            ctx->pc = 0x1EE294u;
            goto label_1ee294;
        }
    }
    ctx->pc = 0x1EE280u;
    // 0x1ee280: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1ee280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1ee284: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1ee284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ee288: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1ee288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ee28c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1EE28Cu;
    SET_GPR_U32(ctx, 31, 0x1EE294u);
    ctx->pc = 0x1EE290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE28Cu;
    // 0x1ee290: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1EE28Cu, 0x1EE294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE294u;
label_1ee294:
    // 0x1ee294: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ee294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee298:
    // 0x1ee298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2A0u;
        // 0x1ee2a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE2A8u;
}
