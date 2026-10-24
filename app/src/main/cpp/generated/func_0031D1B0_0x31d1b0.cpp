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

// Function: func_0031D1B0
// Address: 0x31d1b0 - 0x31d2b8
void func_0031D1B0_0x31d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D1B0_0x31d1b0");
#endif

    switch (ctx->pc) {
        case 0x31d1f8u: goto label_31d1f8;
        case 0x31d230u: goto label_31d230;
        case 0x31d248u: goto label_31d248;
        case 0x31d264u: goto label_31d264;
        case 0x31d270u: goto label_31d270;
        case 0x31d280u: goto label_31d280;
        case 0x31d290u: goto label_31d290;
        default: break;
    }

    ctx->pc = 0x31d1b0u;

    // 0x31d1b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x31d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x31d1b4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31d1b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31d1b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x31d1c0: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x31d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x31d1c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x31d1c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x31d1cc: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x31d1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x31d1d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31d1d4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x31d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x31d1d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d1dc: 0x248458a8  addiu       $a0, $a0, 0x58A8
    ctx->pc = 0x31d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22696));
    // 0x31d1e0: 0x246359a8  addiu       $v1, $v1, 0x59A8
    ctx->pc = 0x31d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22952));
    // 0x31d1e4: 0xa0400600  sb          $zero, 0x600($v0)
    ctx->pc = 0x31d1e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x747AA0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x747AA0u, _value); } while (0);
    // 0x31d1e8: 0x2463007c  addiu       $v1, $v1, 0x7C
    ctx->pc = 0x31d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
    // 0x31d1ec: 0x248400fc  addiu       $a0, $a0, 0xFC
    ctx->pc = 0x31d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x31d1f0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x31d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31d1f4: 0x3c130045  lui         $s3, 0x45
    ctx->pc = 0x31d1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)69 << 16));
label_31d1f8:
    // 0x31d1f8: 0xac80fffc  sw          $zero, -0x4($a0)
    ctx->pc = 0x31d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 0));
    // 0x31d1fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31d200: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x31d200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x31d204: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31d204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x31d208: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x31d208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x31d20c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31D20Cu;
    {
        const bool branch_taken_0x31d20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D20Cu;
        // 0x31d210: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d20c) {
            ctx->pc = 0x31D1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d1f8;
        }
    }
    ctx->pc = 0x31D214u;
    // 0x31d214: 0x24b074a0  addiu       $s0, $a1, 0x74A0
    ctx->pc = 0x31d214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x31d218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31d218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d21c: 0x8e0405ac  lw          $a0, 0x5AC($s0)
    ctx->pc = 0x31d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1452)));
    // 0x31d220: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31d220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31d224: 0x24a50ef0  addiu       $a1, $a1, 0xEF0
    ctx->pc = 0x31d224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3824));
    // 0x31d228: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x31D228u;
    SET_GPR_U32(ctx, 31, 0x31D230u);
    ctx->pc = 0x31D22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D228u;
    // 0x31d22c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x31D228u, 0x31D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D230u;
label_31d230:
    // 0x31d230: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31d230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d234: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31d234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31d238: 0x24a50ef8  addiu       $a1, $a1, 0xEF8
    ctx->pc = 0x31d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3832));
    // 0x31d23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d240: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x31D240u;
    SET_GPR_U32(ctx, 31, 0x31D248u);
    ctx->pc = 0x31D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D240u;
    // 0x31d244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x31D240u, 0x31D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D248u;
label_31d248:
    // 0x31d248: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31D248u;
    {
        const bool branch_taken_0x31d248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D248u;
        // 0x31d24c: 0xae0205fc  sw          $v0, 0x5FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d248) {
            ctx->pc = 0x31D26Cu;
            goto label_31d26c;
        }
    }
    ctx->pc = 0x31D250u;
    // 0x31d250: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31d250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31d254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d258: 0x24a50f00  addiu       $a1, $a1, 0xF00
    ctx->pc = 0x31d258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3840));
    // 0x31d25c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x31D25Cu;
    SET_GPR_U32(ctx, 31, 0x31D264u);
    ctx->pc = 0x31D260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D25Cu;
    // 0x31d260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x31D25Cu, 0x31D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D264u;
label_31d264:
    // 0x31d264: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31d264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d268: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x31d268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_31d26c:
    // 0x31d26c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31d26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d270:
    // 0x31d270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d274: 0x26650f08  addiu       $a1, $s3, 0xF08
    ctx->pc = 0x31d274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3848));
    // 0x31d278: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x31D278u;
    SET_GPR_U32(ctx, 31, 0x31D280u);
    ctx->pc = 0x31D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D278u;
    // 0x31d27c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x31D278u, 0x31D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D280u;
label_31d280:
    // 0x31d280: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D280u;
    {
        const bool branch_taken_0x31d280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D280u;
        // 0x31d284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d280) {
            ctx->pc = 0x31D298u;
            goto label_31d298;
        }
    }
    ctx->pc = 0x31D288u;
    // 0x31d288: 0xc0c7596  jal         func_31D658
    ctx->pc = 0x31D288u;
    SET_GPR_U32(ctx, 31, 0x31D290u);
    ctx->pc = 0x31D28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D288u;
    // 0x31d28c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D658u, 0x31D288u, 0x31D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D290u;
label_31d290:
    // 0x31d290: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x31D290u;
    {
        const bool branch_taken_0x31d290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D290u;
        // 0x31d294: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d290) {
            ctx->pc = 0x31D270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d270;
        }
    }
    ctx->pc = 0x31D298u;
label_31d298:
    // 0x31d298: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31d298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d29c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31d29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d2a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d2a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d2a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31d2a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31D2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2ACu;
        // 0x31d2b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D2B4u;
    // 0x31d2b4: 0x0  nop
    ctx->pc = 0x31d2b4u;
    // NOP
    ctx->pc = 0x31d2b8u;
}
