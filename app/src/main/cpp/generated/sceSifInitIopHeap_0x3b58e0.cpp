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

// Function: sceSifInitIopHeap
// Address: 0x3b58e0 - 0x3b5968
void sceSifInitIopHeap_0x3b58e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifInitIopHeap_0x3b58e0");
#endif

    switch (ctx->pc) {
        case 0x3b58f8u: goto label_3b58f8;
        case 0x3b5900u: goto label_3b5900;
        case 0x3b5934u: goto label_3b5934;
        default: break;
    }

    ctx->pc = 0x3b58e0u;

    // 0x3b58e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b58e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b58e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b58e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b58e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b58ec: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3b58ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3b58f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B58F0u;
    {
        const bool branch_taken_0x3b58f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58F0u;
        // 0x3b58f4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b58f0) {
            ctx->pc = 0x3B591Cu;
            goto label_3b591c;
        }
    }
    ctx->pc = 0x3B58F8u;
label_3b58f8:
    // 0x3b58f8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3b58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3b58fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b5900:
    // 0x3b5900: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b5900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b5904: 0x0  nop
    ctx->pc = 0x3b5904u;
    // NOP
    // 0x3b5908: 0x0  nop
    ctx->pc = 0x3b5908u;
    // NOP
    // 0x3b590c: 0x0  nop
    ctx->pc = 0x3b590cu;
    // NOP
    // 0x3b5910: 0x0  nop
    ctx->pc = 0x3b5910u;
    // NOP
    // 0x3b5914: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B5914u;
    {
        const bool branch_taken_0x3b5914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b5914) {
            ctx->pc = 0x3B5900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5900;
        }
    }
    ctx->pc = 0x3B591Cu;
label_3b591c:
    // 0x3b591c: 0x263017c0  addiu       $s0, $s1, 0x17C0
    ctx->pc = 0x3b591cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6080));
    // 0x3b5920: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3b5920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3b5924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5928: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x3b5928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x3b592c: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x3B592Cu;
    SET_GPR_U32(ctx, 31, 0x3B5934u);
    ctx->pc = 0x3B5930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B592Cu;
    // 0x3b5930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x3B592Cu, 0x3B5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5934u;
label_3b5934:
    // 0x3b5934: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5934u;
    {
        const bool branch_taken_0x3b5934 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3b5934) {
            ctx->pc = 0x3B5938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5934u;
            // 0x3b5938: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5944u;
            goto label_3b5944;
        }
    }
    ctx->pc = 0x3B593Cu;
    // 0x3b593c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B593Cu;
    {
        const bool branch_taken_0x3b593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B593Cu;
        // 0x3b5940: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b593c) {
            ctx->pc = 0x3B5954u;
            goto label_3b5954;
        }
    }
    ctx->pc = 0x3B5944u;
label_3b5944:
    // 0x3b5944: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3B5944u;
    {
        const bool branch_taken_0x3b5944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5944u;
        // 0x3b5948: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5944) {
            ctx->pc = 0x3B58F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b58f8;
        }
    }
    ctx->pc = 0x3B594Cu;
    // 0x3b594c: 0xac40aef4  sw          $zero, -0x510C($v0)
    ctx->pc = 0x3b594cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946548), GPR_U32(ctx, 0));
    // 0x3b5950: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b5950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5954:
    // 0x3b5954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b5954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5958: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b5958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b595c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b595cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5960: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5960u;
        // 0x3b5964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5968u;
}
