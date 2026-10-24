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

// Function: func_0033F4C8
// Address: 0x33f4c8 - 0x33f590
void func_0033F4C8_0x33f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F4C8_0x33f4c8");
#endif

    switch (ctx->pc) {
        case 0x33f4f0u: goto label_33f4f0;
        case 0x33f53cu: goto label_33f53c;
        case 0x33f550u: goto label_33f550;
        case 0x33f564u: goto label_33f564;
        default: break;
    }

    ctx->pc = 0x33f4c8u;

    // 0x33f4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f4cc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33f4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f4d4: 0x2463aec0  addiu       $v1, $v1, -0x5140
    ctx->pc = 0x33f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946496));
    // 0x33f4d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EAEC0u));
    // 0x33f4dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33f4e0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x33F4E0u;
    {
        const bool branch_taken_0x33f4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F4E0u;
        // 0x33f4e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f4e0) {
            ctx->pc = 0x33F580u;
            goto label_33f580;
        }
    }
    ctx->pc = 0x33F4E8u;
    // 0x33f4e8: 0xc0c8ed6  jal         func_323B58
    ctx->pc = 0x33F4E8u;
    SET_GPR_U32(ctx, 31, 0x33F4F0u);
    ctx->pc = 0x323B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B58u, 0x33F4E8u, 0x33F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F4F0u;
label_33f4f0:
    // 0x33f4f0: 0x3c0c003f  lui         $t4, 0x3F
    ctx->pc = 0x33f4f0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)63 << 16));
    // 0x33f4f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f4f8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x33f4f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f4fc: 0x3c0b003f  lui         $t3, 0x3F
    ctx->pc = 0x33f4fcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)63 << 16));
    // 0x33f500: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33f500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33f504: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x33f504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x33f508: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x33f508u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x33f50c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x33f50cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x33f510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f514: 0x2484b810  addiu       $a0, $a0, -0x47F0
    ctx->pc = 0x33f514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948880));
    // 0x33f518: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x33f518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33f51c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33f520: 0xad8ab840  sw          $t2, -0x47C0($t4)
    ctx->pc = 0x33f520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3EB840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB840u, _value); } while (0);
    // 0x33f524: 0xad62b83c  sw          $v0, -0x47C4($t3)
    ctx->pc = 0x33f524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EB83Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB83Cu, _value); } while (0);
    // 0x33f528: 0xac60b838  sw          $zero, -0x47C8($v1)
    ctx->pc = 0x33f528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EB838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB838u, _value); } while (0);
    // 0x33f52c: 0xace0b834  sw          $zero, -0x47CC($a3)
    ctx->pc = 0x33f52cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EB834u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB834u, _value); } while (0);
    // 0x33f530: 0xad00b708  sw          $zero, -0x48F8($t0)
    ctx->pc = 0x33f530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EB708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB708u, _value); } while (0);
    // 0x33f534: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F534u;
    SET_GPR_U32(ctx, 31, 0x33F53Cu);
    ctx->pc = 0x33F538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F534u;
    // 0x33f538: 0xad20b830  sw          $zero, -0x47D0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294948912), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F534u, 0x33F53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F53Cu;
label_33f53c:
    // 0x33f53c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f540: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x33f540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33f544: 0x2484b710  addiu       $a0, $a0, -0x48F0
    ctx->pc = 0x33f544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    // 0x33f548: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F548u;
    SET_GPR_U32(ctx, 31, 0x33F550u);
    ctx->pc = 0x33F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F548u;
    // 0x33f54c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F548u, 0x33F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F550u;
label_33f550:
    // 0x33f550: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f554: 0x2484b308  addiu       $a0, $a0, -0x4CF8
    ctx->pc = 0x33f554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947592));
    // 0x33f558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f55c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F55Cu;
    SET_GPR_U32(ctx, 31, 0x33F564u);
    ctx->pc = 0x33F560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F55Cu;
    // 0x33f560: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F55Cu, 0x33F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F564u;
label_33f564:
    // 0x33f564: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f56c: 0x2484aec8  addiu       $a0, $a0, -0x5138
    ctx->pc = 0x33f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946504));
    // 0x33f570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f574: 0x24060440  addiu       $a2, $zero, 0x440
    ctx->pc = 0x33f574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x33f578: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x33F578u;
    ctx->pc = 0x33F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F578u;
    // 0x33f57c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F578u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33F580u;
label_33f580:
    // 0x33f580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f584: 0x3e00008  jr          $ra
    ctx->pc = 0x33F584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F584u;
        // 0x33f588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F58Cu;
    // 0x33f58c: 0x0  nop
    ctx->pc = 0x33f58cu;
    // NOP
    ctx->pc = 0x33f590u;
}
