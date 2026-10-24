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

// Function: scePadSetMainMode
// Address: 0x398070 - 0x398128
void scePadSetMainMode_0x398070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadSetMainMode_0x398070");
#endif

    switch (ctx->pc) {
        case 0x3980d8u: goto label_3980d8;
        case 0x398104u: goto label_398104;
        default: break;
    }

    ctx->pc = 0x398070u;

    // 0x398070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x398070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x398074: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x398074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x398078: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x398078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39807c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x39807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x398080: 0x2470c300  addiu       $s0, $v1, -0x3D00
    ctx->pc = 0x398080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951680));
    // 0x398084: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x398084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x398088: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x398088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x39808c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39808cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398090: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x398090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x398094: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x398094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398098: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x398098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x77C30Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C30Cu, _value); } while (0);
    // 0x39809c: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x39809cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3980a0: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x3980a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x77C310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C310u, _value); } while (0);
    // 0x3980a4: 0x2484c0c0  addiu       $a0, $a0, -0x3F40
    ctx->pc = 0x3980a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951104));
    // 0x3980a8: 0xac62c300  sw          $v0, -0x3D00($v1)
    ctx->pc = 0x3980a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x77C300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C300u, _value); } while (0);
    // 0x3980ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3980acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3980b0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x3980b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x77C304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C304u, _value); } while (0);
    // 0x3980b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3980b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3980b8: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x3980b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x77C308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C308u, _value); } while (0);
    // 0x3980bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3980bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3980c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3980c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3980c4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3980c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3980c8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3980c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3980cc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x3980ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3980d0: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3980D0u;
    SET_GPR_U32(ctx, 31, 0x3980D8u);
    ctx->pc = 0x3980D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3980D0u;
    // 0x3980d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3980D0u, 0x3980D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3980D8u;
label_3980d8:
    // 0x3980d8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3980D8u;
    {
        const bool branch_taken_0x3980d8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3980d8) {
            ctx->pc = 0x3980DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3980D8u;
            // 0x3980dc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3980E8u;
            goto label_3980e8;
        }
    }
    ctx->pc = 0x3980E0u;
    // 0x3980e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3980E0u;
    {
        const bool branch_taken_0x3980e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3980E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980E0u;
        // 0x3980e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3980e0) {
            ctx->pc = 0x39810Cu;
            goto label_39810c;
        }
    }
    ctx->pc = 0x3980E8u;
label_3980e8:
    // 0x3980e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3980e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3980ec: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3980ECu;
    {
        const bool branch_taken_0x3980ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3980F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980ECu;
        // 0x3980f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3980ec) {
            ctx->pc = 0x39810Cu;
            goto label_39810c;
        }
    }
    ctx->pc = 0x3980F4u;
    // 0x3980f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3980f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3980f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3980f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3980fc: 0xc0e5f86  jal         func_397E18
    ctx->pc = 0x3980FCu;
    SET_GPR_U32(ctx, 31, 0x398104u);
    ctx->pc = 0x398100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3980FCu;
    // 0x398100: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397E18u, 0x3980FCu, 0x398104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398104u;
label_398104:
    // 0x398104: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x398104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x398108: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x398108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39810c:
    // 0x39810c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39810cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x398110: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x398110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398114: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x398114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398118: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x398118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39811c: 0x3e00008  jr          $ra
    ctx->pc = 0x39811Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39811Cu;
        // 0x398120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39811Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398124u;
    // 0x398124: 0x0  nop
    ctx->pc = 0x398124u;
    // NOP
    ctx->pc = 0x398128u;
}
