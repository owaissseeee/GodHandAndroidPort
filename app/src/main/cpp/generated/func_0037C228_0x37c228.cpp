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

// Function: func_0037C228
// Address: 0x37c228 - 0x37c2a8
void func_0037C228_0x37c228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C228_0x37c228");
#endif

    switch (ctx->pc) {
        case 0x37c27cu: goto label_37c27c;
        case 0x37c294u: goto label_37c294;
        default: break;
    }

    ctx->pc = 0x37c228u;

    // 0x37c228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37c22c: 0x24027f00  addiu       $v0, $zero, 0x7F00
    ctx->pc = 0x37c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x37c230: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37c230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37c234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37c238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37c238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c23c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c240: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37c240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c244: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x37c244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c248: 0xa6000032  sh          $zero, 0x32($s0)
    ctx->pc = 0x37c248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x37c24c: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x37c24cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x37c250: 0xa6000036  sh          $zero, 0x36($s0)
    ctx->pc = 0x37c250u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x37c254: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x37c254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x37c258: 0xa6020038  sh          $v0, 0x38($s0)
    ctx->pc = 0x37c258u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c25c: 0x96230032  lhu         $v1, 0x32($s1)
    ctx->pc = 0x37c25cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x37c260: 0xa603003a  sh          $v1, 0x3A($s0)
    ctx->pc = 0x37c260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c264: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x37c264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x37c268: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37c268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37c26c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C26Cu;
    {
        const bool branch_taken_0x37c26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c26c) {
            ctx->pc = 0x37C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C26Cu;
            // 0x37c270: 0x96230018  lhu         $v1, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C280u;
            goto label_37c280;
        }
    }
    ctx->pc = 0x37C274u;
    // 0x37c274: 0xc0df1a8  jal         func_37C6A0
    ctx->pc = 0x37C274u;
    SET_GPR_U32(ctx, 31, 0x37C27Cu);
    ctx->pc = 0x37C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C6A0u, 0x37C274u, 0x37C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C27Cu;
label_37c27c:
    // 0x37c27c: 0x96230018  lhu         $v1, 0x18($s1)
    ctx->pc = 0x37c27cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_37c280:
    // 0x37c280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c284: 0xa6030026  sh          $v1, 0x26($s0)
    ctx->pc = 0x37c284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c288: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x37c288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x37c28c: 0xc0df4f2  jal         func_37D3C8
    ctx->pc = 0x37C28Cu;
    SET_GPR_U32(ctx, 31, 0x37C294u);
    ctx->pc = 0x37C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C28Cu;
    // 0x37c290: 0xa6020028  sh          $v0, 0x28($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3C8u, 0x37C28Cu, 0x37C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C294u;
label_37c294:
    // 0x37c294: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37c294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x37C2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2A0u;
        // 0x37c2a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C2A8u;
}
