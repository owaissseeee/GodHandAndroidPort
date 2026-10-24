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

// Function: func_002990A0
// Address: 0x2990a0 - 0x2991b0
void func_002990A0_0x2990a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002990A0_0x2990a0");
#endif

    switch (ctx->pc) {
        case 0x2990e0u: goto label_2990e0;
        case 0x299110u: goto label_299110;
        case 0x299150u: goto label_299150;
        case 0x299180u: goto label_299180;
        default: break;
    }

    ctx->pc = 0x2990a0u;

    // 0x2990a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2990a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2990a4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2990a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2990a8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2990a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2990ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2990acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2990b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2990b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2990b4: 0x2446ac28  addiu       $a2, $v0, -0x53D8
    ctx->pc = 0x2990b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945832));
    // 0x2990b8: 0x8044ac28  lb          $a0, -0x53D8($v0)
    ctx->pc = 0x2990b8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x44AC28u));
    // 0x2990bc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2990bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2990c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2990c4: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x2990c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x2990c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2990c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2990ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990d0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2990D0u;
    {
        const bool branch_taken_0x2990d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990D0u;
        // 0x2990d4: 0x3c100045  lui         $s0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990d0) {
            ctx->pc = 0x299108u;
            goto label_299108;
        }
    }
    ctx->pc = 0x2990D8u;
    // 0x2990d8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2990d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2990dc: 0x0  nop
    ctx->pc = 0x2990dcu;
    // NOP
label_2990e0:
    // 0x2990e0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2990e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2990e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2990e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2990e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2990e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2990ec: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x2990ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x2990f0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x2990f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2990f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2990F4u;
    {
        const bool branch_taken_0x2990f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990F4u;
        // 0x2990f8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990f4) {
            ctx->pc = 0x299108u;
            goto label_299108;
        }
    }
    ctx->pc = 0x2990FCu;
    // 0x2990fc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2990fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x299100: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x299100u;
    {
        const bool branch_taken_0x299100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299100) {
            ctx->pc = 0x299104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299100u;
            // 0x299104: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2990E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2990e0;
        }
    }
    ctx->pc = 0x299108u;
label_299108:
    // 0x299108: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x299108u;
    SET_GPR_U32(ctx, 31, 0x299110u);
    ctx->pc = 0x29910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299108u;
    // 0x29910c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x299108u, 0x299110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299110u;
label_299110:
    // 0x299110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x299110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299114: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x299114u;
    {
        const bool branch_taken_0x299114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299114u;
        // 0x299118: 0x8202ac30  lb          $v0, -0x53D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299114) {
            ctx->pc = 0x299134u;
            goto label_299134;
        }
    }
    ctx->pc = 0x29911Cu;
    // 0x29911c: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x29911cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x299120: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x299120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x299124: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x299124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x299128: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x299128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29912c: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x29912cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
    // 0x299130: 0x8202ac30  lb          $v0, -0x53D0($s0)
    ctx->pc = 0x299130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945840)));
label_299134:
    // 0x299134: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x299134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x299138: 0x2603ac30  addiu       $v1, $s0, -0x53D0
    ctx->pc = 0x299138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945840));
    // 0x29913c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29913cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299140: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x299140u;
    {
        const bool branch_taken_0x299140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299140u;
        // 0x299144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299140) {
            ctx->pc = 0x299178u;
            goto label_299178;
        }
    }
    ctx->pc = 0x299148u;
    // 0x299148: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x299148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29914c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x29914cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_299150:
    // 0x299150: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x299150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x299154: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x299154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x299158: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x299158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29915c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x29915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x299160: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x299160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x299164: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x299164u;
    {
        const bool branch_taken_0x299164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299164u;
        // 0x299168: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299164) {
            ctx->pc = 0x299178u;
            goto label_299178;
        }
    }
    ctx->pc = 0x29916Cu;
    // 0x29916c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x29916cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x299170: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x299170u;
    {
        const bool branch_taken_0x299170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299170) {
            ctx->pc = 0x299174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299170u;
            // 0x299174: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299150;
        }
    }
    ctx->pc = 0x299178u;
label_299178:
    // 0x299178: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x299178u;
    SET_GPR_U32(ctx, 31, 0x299180u);
    ctx->pc = 0x29917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299178u;
    // 0x29917c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x299178u, 0x299180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299180u;
label_299180:
    // 0x299180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x299180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299184: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x299184u;
    {
        const bool branch_taken_0x299184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299184u;
        // 0x299188: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299184) {
            ctx->pc = 0x2991A0u;
            goto label_2991a0;
        }
    }
    ctx->pc = 0x29918Cu;
    // 0x29918c: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x29918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x299190: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x299190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x299194: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x299194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x299198: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x299198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29919c: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x29919cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_2991a0:
    // 0x2991a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2991a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2991a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2991a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2991a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2991A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2991ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991A8u;
        // 0x2991ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2991A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2991B0u;
}
