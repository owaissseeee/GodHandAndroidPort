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

// Function: sceDmaSendN
// Address: 0x397450 - 0x3974d0
void sceDmaSendN_0x397450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaSendN_0x397450");
#endif

    switch (ctx->pc) {
        case 0x397474u: goto label_397474;
        case 0x397480u: goto label_397480;
        default: break;
    }

    ctx->pc = 0x397450u;

    // 0x397450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x397454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x397454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x397458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x397458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39745c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x397460: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x397460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x397464: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x397464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397468: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x397468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39746c: 0xc0e5c28  jal         func_3970A0
    ctx->pc = 0x39746Cu;
    SET_GPR_U32(ctx, 31, 0x397474u);
    ctx->pc = 0x397470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39746Cu;
    // 0x397470: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3970A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3970A0u, 0x39746Cu, 0x397474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397474u;
label_397474:
    // 0x397474: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x397474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397478: 0xc0e5c0a  jal         func_397028
    ctx->pc = 0x397478u;
    SET_GPR_U32(ctx, 31, 0x397480u);
    ctx->pc = 0x39747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397478u;
    // 0x39747c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397028u, 0x397478u, 0x397480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397480u;
label_397480:
    // 0x397480: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x397480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x397484: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x397484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x397488: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x397488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39748c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x39748Cu;
    {
        const bool branch_taken_0x39748c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39748c) {
            ctx->pc = 0x397490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39748Cu;
            // 0x397490: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397494u;
            goto label_397494;
        }
    }
    ctx->pc = 0x397494u;
label_397494:
    // 0x397494: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x397494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397498: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x397498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x39749c: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x39749cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x3974a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3974a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3974a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3974a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3974a8: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x3974a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x3974ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3974acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3974b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3974b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3974b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3974b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3974b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3974b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3974bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3974BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3974C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974BCu;
        // 0x3974c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3974BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3974C4u;
    // 0x3974c4: 0x0  nop
    ctx->pc = 0x3974c4u;
    // NOP
    // 0x3974c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3974c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3974cc: 0x0  nop
    ctx->pc = 0x3974ccu;
    // NOP
    ctx->pc = 0x3974d0u;
}
