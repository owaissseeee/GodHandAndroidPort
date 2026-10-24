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

// Function: func_0033F3F0
// Address: 0x33f3f0 - 0x33f4c8
void func_0033F3F0_0x33f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F3F0_0x33f3f0");
#endif

    switch (ctx->pc) {
        case 0x33f438u: goto label_33f438;
        case 0x33f44cu: goto label_33f44c;
        case 0x33f460u: goto label_33f460;
        case 0x33f474u: goto label_33f474;
        default: break;
    }

    ctx->pc = 0x33f3f0u;

    // 0x33f3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f3f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f3f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f3fc: 0x2490aec0  addiu       $s0, $a0, -0x5140
    ctx->pc = 0x33f3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946496));
    // 0x33f400: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x33f400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x33f404: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x33f404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x33f408: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33f408u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EAEC0u));
    // 0x33f40c: 0x246388f0  addiu       $v1, $v1, -0x7710
    ctx->pc = 0x33f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936816));
    // 0x33f410: 0x24426940  addiu       $v0, $v0, 0x6940
    ctx->pc = 0x33f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26944));
    // 0x33f414: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33f418: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33f418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7588F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7588F0u, _value); } while (0);
    // 0x33f41c: 0x54800025  bnel        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x33F41Cu;
    {
        const bool branch_taken_0x33f41c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f41c) {
            ctx->pc = 0x33F420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F41Cu;
            // 0x33f420: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F4B4u;
            goto label_33f4b4;
        }
    }
    ctx->pc = 0x33F424u;
    // 0x33f424: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f42c: 0x2484aec8  addiu       $a0, $a0, -0x5138
    ctx->pc = 0x33f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946504));
    // 0x33f430: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F430u;
    SET_GPR_U32(ctx, 31, 0x33F438u);
    ctx->pc = 0x33F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F430u;
    // 0x33f434: 0x24060440  addiu       $a2, $zero, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F430u, 0x33F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F438u;
label_33f438:
    // 0x33f438: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f43c: 0x2484b308  addiu       $a0, $a0, -0x4CF8
    ctx->pc = 0x33f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947592));
    // 0x33f440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f444: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F444u;
    SET_GPR_U32(ctx, 31, 0x33F44Cu);
    ctx->pc = 0x33F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F444u;
    // 0x33f448: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F444u, 0x33F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F44Cu;
label_33f44c:
    // 0x33f44c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f450: 0x2484b710  addiu       $a0, $a0, -0x48F0
    ctx->pc = 0x33f450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    // 0x33f454: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x33f454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33f458: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F458u;
    SET_GPR_U32(ctx, 31, 0x33F460u);
    ctx->pc = 0x33F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F458u;
    // 0x33f45c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F458u, 0x33F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F460u;
label_33f460:
    // 0x33f460: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f464: 0x2484b810  addiu       $a0, $a0, -0x47F0
    ctx->pc = 0x33f464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948880));
    // 0x33f468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f46c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F46Cu;
    SET_GPR_U32(ctx, 31, 0x33F474u);
    ctx->pc = 0x33F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F46Cu;
    // 0x33f470: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F46Cu, 0x33F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F474u;
label_33f474:
    // 0x33f474: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x33f474u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x33f478: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f47c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x33f47cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x33f480: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x33f480u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x33f484: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x33f484u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x33f488: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x33f488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x33f48c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33f490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33f490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f494: 0xaca3b83c  sw          $v1, -0x47C4($a1)
    ctx->pc = 0x33f494u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EB83Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB83Cu, _value); } while (0);
    // 0x33f498: 0xac82b840  sw          $v0, -0x47C0($a0)
    ctx->pc = 0x33f498u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EB840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB840u, _value); } while (0);
    // 0x33f49c: 0xacc0b830  sw          $zero, -0x47D0($a2)
    ctx->pc = 0x33f49cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EB830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB830u, _value); } while (0);
    // 0x33f4a0: 0xace0b708  sw          $zero, -0x48F8($a3)
    ctx->pc = 0x33f4a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EB708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB708u, _value); } while (0);
    // 0x33f4a4: 0xad00b834  sw          $zero, -0x47CC($t0)
    ctx->pc = 0x33f4a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EB834u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB834u, _value); } while (0);
    // 0x33f4a8: 0xad20b838  sw          $zero, -0x47C8($t1)
    ctx->pc = 0x33f4a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EB838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB838u, _value); } while (0);
    // 0x33f4ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f4b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x33f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_33f4b4:
    // 0x33f4b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33f4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f4b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33f4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x33F4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F4C0u;
        // 0x33f4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F4C8u;
}
