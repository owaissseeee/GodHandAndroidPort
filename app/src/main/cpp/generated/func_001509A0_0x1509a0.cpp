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

// Function: func_001509A0
// Address: 0x1509a0 - 0x150aa8
void func_001509A0_0x1509a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001509A0_0x1509a0");
#endif

    switch (ctx->pc) {
        case 0x150a00u: goto label_150a00;
        default: break;
    }

    ctx->pc = 0x1509a0u;

    // 0x1509a0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1509a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1509a4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1509a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1509a8: 0x3442bf80  ori         $v0, $v0, 0xBF80
    ctx->pc = 0x1509a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49024);
    // 0x1509ac: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1509acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1509b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1509b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1509b4: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1509b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1509b8: 0x3c0f7000  lui         $t7, 0x7000
    ctx->pc = 0x1509b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)28672 << 16));
    // 0x1509bc: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1509bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1509c0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1509c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1509c4: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x1509c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1509c8: 0xe737c  dsll32      $t6, $t6, 13
    ctx->pc = 0x1509c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 13));
    // 0x1509cc: 0x35ce8001  ori         $t6, $t6, 0x8001
    ctx->pc = 0x1509ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)32769);
    // 0x1509d0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1509d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1509d4: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x1509d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1509d8: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x1509d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1509dc: 0x3c0b1100  lui         $t3, 0x1100
    ctx->pc = 0x1509dcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4352 << 16));
    // 0x1509e0: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x1509e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1509e4: 0x24090051  addiu       $t1, $zero, 0x51
    ctx->pc = 0x1509e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1509e8: 0x24080052  addiu       $t0, $zero, 0x52
    ctx->pc = 0x1509e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1509ec: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1509ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1509f0: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x1509f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x1509f4: 0x34e78004  ori         $a3, $a3, 0x8004
    ctx->pc = 0x1509f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32772);
    // 0x1509f8: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x1509f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1509fc: 0x0  nop
    ctx->pc = 0x1509fcu;
    // NOP
label_150a00:
    // 0x150a00: 0xfc8fffc0  sd          $t7, -0x40($a0)
    ctx->pc = 0x150a00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967232), GPR_U64(ctx, 15));
    // 0x150a04: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x150a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x150a08: 0xac80ffc8  sw          $zero, -0x38($a0)
    ctx->pc = 0x150a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967240), GPR_U32(ctx, 0));
    // 0x150a0c: 0xac83ffcc  sw          $v1, -0x34($a0)
    ctx->pc = 0x150a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967244), GPR_U32(ctx, 3));
    // 0x150a10: 0xfc8effd0  sd          $t6, -0x30($a0)
    ctx->pc = 0x150a10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967248), GPR_U64(ctx, 14));
    // 0x150a14: 0xfc82ffd8  sd          $v0, -0x28($a0)
    ctx->pc = 0x150a14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967256), GPR_U64(ctx, 2));
    // 0x150a18: 0xfc8dffe0  sd          $t5, -0x20($a0)
    ctx->pc = 0x150a18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967264), GPR_U64(ctx, 13));
    // 0x150a1c: 0xfc8cffe8  sd          $t4, -0x18($a0)
    ctx->pc = 0x150a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967272), GPR_U64(ctx, 12));
    // 0x150a20: 0xac8bff48  sw          $t3, -0xB8($a0)
    ctx->pc = 0x150a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967112), GPR_U32(ctx, 11));
    // 0x150a24: 0xfc8aff68  sd          $t2, -0x98($a0)
    ctx->pc = 0x150a24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967144), GPR_U64(ctx, 10));
    // 0x150a28: 0xfc80ff70  sd          $zero, -0x90($a0)
    ctx->pc = 0x150a28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967152), GPR_U64(ctx, 0));
    // 0x150a2c: 0xfc89ff78  sd          $t1, -0x88($a0)
    ctx->pc = 0x150a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967160), GPR_U64(ctx, 9));
    // 0x150a30: 0xfc88ff88  sd          $t0, -0x78($a0)
    ctx->pc = 0x150a30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967176), GPR_U64(ctx, 8));
    // 0x150a34: 0xfc87ff50  sd          $a3, -0xB0($a0)
    ctx->pc = 0x150a34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967120), GPR_U64(ctx, 7));
    // 0x150a38: 0xfc82ff58  sd          $v0, -0xA8($a0)
    ctx->pc = 0x150a38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967128), GPR_U64(ctx, 2));
    // 0x150a3c: 0xfc80ff90  sd          $zero, -0x70($a0)
    ctx->pc = 0x150a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967184), GPR_U64(ctx, 0));
    // 0x150a40: 0xfc86ff98  sd          $a2, -0x68($a0)
    ctx->pc = 0x150a40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967192), GPR_U64(ctx, 6));
    // 0x150a44: 0xfc80ffa8  sd          $zero, -0x58($a0)
    ctx->pc = 0x150a44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967208), GPR_U64(ctx, 0));
    // 0x150a48: 0xac80ffb8  sw          $zero, -0x48($a0)
    ctx->pc = 0x150a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967224), GPR_U32(ctx, 0));
    // 0x150a4c: 0xfc8f0080  sd          $t7, 0x80($a0)
    ctx->pc = 0x150a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 15));
    // 0x150a50: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x150a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x150a54: 0xac83008c  sw          $v1, 0x8C($a0)
    ctx->pc = 0x150a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
    // 0x150a58: 0xfc8e0090  sd          $t6, 0x90($a0)
    ctx->pc = 0x150a58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 144), GPR_U64(ctx, 14));
    // 0x150a5c: 0xfc820098  sd          $v0, 0x98($a0)
    ctx->pc = 0x150a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 2));
    // 0x150a60: 0xfc8d00a0  sd          $t5, 0xA0($a0)
    ctx->pc = 0x150a60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 13));
    // 0x150a64: 0xfc8c00a8  sd          $t4, 0xA8($a0)
    ctx->pc = 0x150a64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 168), GPR_U64(ctx, 12));
    // 0x150a68: 0xac8b0008  sw          $t3, 0x8($a0)
    ctx->pc = 0x150a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 11));
    // 0x150a6c: 0xfc8a0028  sd          $t2, 0x28($a0)
    ctx->pc = 0x150a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 10));
    // 0x150a70: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x150a70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x150a74: 0xfc890038  sd          $t1, 0x38($a0)
    ctx->pc = 0x150a74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 9));
    // 0x150a78: 0xfc880048  sd          $t0, 0x48($a0)
    ctx->pc = 0x150a78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 8));
    // 0x150a7c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x150a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x150a80: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x150a80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x150a84: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x150a84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x150a88: 0xfc860058  sd          $a2, 0x58($a0)
    ctx->pc = 0x150a88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 6));
    // 0x150a8c: 0xfc800068  sd          $zero, 0x68($a0)
    ctx->pc = 0x150a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 0));
    // 0x150a90: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x150a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x150a94: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x150A94u;
    {
        const bool branch_taken_0x150a94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x150A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A94u;
        // 0x150a98: 0x2484fe80  addiu       $a0, $a0, -0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a94) {
            ctx->pc = 0x150A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150a00;
        }
    }
    ctx->pc = 0x150A9Cu;
    // 0x150a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x150A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150AA4u;
    // 0x150aa4: 0x0  nop
    ctx->pc = 0x150aa4u;
    // NOP
    ctx->pc = 0x150aa8u;
}
