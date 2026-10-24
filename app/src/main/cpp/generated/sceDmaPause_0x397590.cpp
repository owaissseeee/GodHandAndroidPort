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

// Function: sceDmaPause
// Address: 0x397590 - 0x397630
void sceDmaPause_0x397590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaPause_0x397590");
#endif

    switch (ctx->pc) {
        case 0x3975a8u: goto label_3975a8;
        case 0x397610u: goto label_397610;
        default: break;
    }

    ctx->pc = 0x397590u;

    // 0x397590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x397590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x397594: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x397594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x397598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x397598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39759c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39759cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3975a0: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3975A0u;
    SET_GPR_U32(ctx, 31, 0x3975A8u);
    ctx->pc = 0x3975A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3975A0u;
    // 0x3975a4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3975A0u, 0x3975A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3975A8u;
label_3975a8:
    // 0x3975a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3975a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3975ac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3975acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3975b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3975b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3975b4: 0x3442f520  ori         $v0, $v0, 0xF520
    ctx->pc = 0x3975b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62752);
    // 0x3975b8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3975b8u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x3975bc: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x3975bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3975c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3975C0u;
    {
        const bool branch_taken_0x3975c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3975C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975C0u;
        // 0x3975c4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3975c0) {
            ctx->pc = 0x3975D8u;
            goto label_3975d8;
        }
    }
    ctx->pc = 0x3975C8u;
    // 0x3975c8: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x3975c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3975cc: 0x3442f590  ori         $v0, $v0, 0xF590
    ctx->pc = 0x3975ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62864);
    // 0x3975d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3975d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3975d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3975d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3975d8:
    // 0x3975d8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3975d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3975dc: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x3975dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x3975e0: 0x3484feff  ori         $a0, $a0, 0xFEFF
    ctx->pc = 0x3975e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65279);
    // 0x3975e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3975e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3975e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3975e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3975ec: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3975ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3975f0: 0x3463f590  ori         $v1, $v1, 0xF590
    ctx->pc = 0x3975f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62864);
    // 0x3975f4: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x3975f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x3975f8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3975f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3975fc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3975fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x397600: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x397600u;
    {
        const bool branch_taken_0x397600 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x397604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397600u;
        // 0x397604: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397600) {
            ctx->pc = 0x397614u;
            goto label_397614;
        }
    }
    ctx->pc = 0x397608u;
    // 0x397608: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x397608u;
    SET_GPR_U32(ctx, 31, 0x397610u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x397608u, 0x397610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397610u;
label_397610:
    // 0x397610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x397610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_397614:
    // 0x397614: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x397614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397618: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x397618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39761c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39761cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397620: 0x3e00008  jr          $ra
    ctx->pc = 0x397620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397620u;
        // 0x397624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397628u;
    // 0x397628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x397628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39762c: 0x0  nop
    ctx->pc = 0x39762cu;
    // NOP
    ctx->pc = 0x397630u;
}
