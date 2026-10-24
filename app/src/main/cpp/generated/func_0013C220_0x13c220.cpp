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

// Function: func_0013C220
// Address: 0x13c220 - 0x13c298
void func_0013C220_0x13c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013C220_0x13c220");
#endif

    switch (ctx->pc) {
        case 0x13c250u: goto label_13c250;
        case 0x13c258u: goto label_13c258;
        case 0x13c260u: goto label_13c260;
        default: break;
    }

    ctx->pc = 0x13c220u;

    // 0x13c220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c224: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c228: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13c228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13c22c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x13c22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13c230: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13c230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13c234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c238: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13c23c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c240: 0x26320098  addiu       $s2, $s1, 0x98
    ctx->pc = 0x13c240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x13c244: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x13c244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x13c248: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13C248u;
    SET_GPR_U32(ctx, 31, 0x13C250u);
    ctx->pc = 0x13C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C248u;
    // 0x13c24c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13C248u, 0x13C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C250u;
label_13c250:
    // 0x13c250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c254: 0x0  nop
    ctx->pc = 0x13c254u;
    // NOP
label_13c258:
    // 0x13c258: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13C258u;
    SET_GPR_U32(ctx, 31, 0x13C260u);
    ctx->pc = 0x13C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C258u;
    // 0x13c25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13C258u, 0x13C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C260u;
label_13c260:
    // 0x13c260: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x13c260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13c264: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13c264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13c268: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13c26c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13c26cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13c270: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13c270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13c274: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x13c274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x13c278: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13C278u;
    {
        const bool branch_taken_0x13c278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C278u;
        // 0x13c27c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c278) {
            ctx->pc = 0x13C258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c258;
        }
    }
    ctx->pc = 0x13C280u;
    // 0x13c280: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13c280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c284: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13c284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c288: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13c288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c28c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c290: 0x3e00008  jr          $ra
    ctx->pc = 0x13C290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C290u;
        // 0x13c294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C298u;
}
