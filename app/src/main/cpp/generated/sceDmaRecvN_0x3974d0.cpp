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

// Function: sceDmaRecvN
// Address: 0x3974d0 - 0x397550
void sceDmaRecvN_0x3974d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaRecvN_0x3974d0");
#endif

    switch (ctx->pc) {
        case 0x3974f4u: goto label_3974f4;
        case 0x397500u: goto label_397500;
        default: break;
    }

    ctx->pc = 0x3974d0u;

    // 0x3974d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3974d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3974d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3974d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3974d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3974d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3974dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3974dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3974e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3974e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3974e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3974e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3974e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3974e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3974ec: 0xc0e5c28  jal         func_3970A0
    ctx->pc = 0x3974ECu;
    SET_GPR_U32(ctx, 31, 0x3974F4u);
    ctx->pc = 0x3974F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3974ECu;
    // 0x3974f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3970A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3970A0u, 0x3974ECu, 0x3974F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3974F4u;
label_3974f4:
    // 0x3974f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3974f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3974f8: 0xc0e5c0a  jal         func_397028
    ctx->pc = 0x3974F8u;
    SET_GPR_U32(ctx, 31, 0x397500u);
    ctx->pc = 0x3974FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3974F8u;
    // 0x3974fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397028u, 0x3974F8u, 0x397500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397500u;
label_397500:
    // 0x397500: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x397500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x397504: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x397504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x397508: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x397508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39750c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x39750Cu;
    {
        const bool branch_taken_0x39750c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39750c) {
            ctx->pc = 0x397510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39750Cu;
            // 0x397510: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397514u;
            goto label_397514;
        }
    }
    ctx->pc = 0x397514u;
label_397514:
    // 0x397514: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x397514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397518: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x397518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x39751c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x39751cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x397520: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x397520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x397524: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x397524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x397528: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x397528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39752c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x39752cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x397530: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x397530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397534: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x397534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x397538: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x397538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39753c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39753cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x397540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397544: 0x3e00008  jr          $ra
    ctx->pc = 0x397544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397544u;
        // 0x397548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39754Cu;
    // 0x39754c: 0x0  nop
    ctx->pc = 0x39754cu;
    // NOP
    ctx->pc = 0x397550u;
}
