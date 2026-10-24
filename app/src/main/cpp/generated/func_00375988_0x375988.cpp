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

// Function: func_00375988
// Address: 0x375988 - 0x375a78
void func_00375988_0x375988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375988_0x375988");
#endif

    switch (ctx->pc) {
        case 0x375a6cu: goto label_375a6c;
        default: break;
    }

    ctx->pc = 0x375988u;

    // 0x375988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37598c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x37598cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x375990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375994: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x375994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375998: 0x46403  sra         $t4, $a0, 16
    ctx->pc = 0x375998u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 16));
    // 0x37599c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3759a0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3759a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3759a4: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x3759a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x3759a8: 0xc1940  sll         $v1, $t4, 5
    ctx->pc = 0x3759a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x3759ac: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x3759acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x3759b0: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x3759b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3759b4: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x3759b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x3759b8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3759b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3759bc: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x3759bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x3759c0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3759c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3759c4: 0xad47000c  sw          $a3, 0xC($t2)
    ctx->pc = 0x3759c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
    // 0x3759c8: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x3759c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x3759cc: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x3759ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3759d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3759D0u;
    {
        const bool branch_taken_0x3759d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3759D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3759D0u;
        // 0x3759d4: 0x248ba880  addiu       $t3, $a0, -0x5780 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3759d0) {
            ctx->pc = 0x3759E0u;
            goto label_3759e0;
        }
    }
    ctx->pc = 0x3759D8u;
    // 0x3759d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3759D8u;
    {
        const bool branch_taken_0x3759d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3759DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3759D8u;
        // 0x3759dc: 0xad400010  sw          $zero, 0x10($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3759d8) {
            ctx->pc = 0x3759E8u;
            goto label_3759e8;
        }
    }
    ctx->pc = 0x3759E0u;
label_3759e0:
    // 0x3759e0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3759e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3759e4: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x3759e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
label_3759e8:
    // 0x3759e8: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x3759e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x3759ec: 0xad420014  sw          $v0, 0x14($t2)
    ctx->pc = 0x3759ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 2));
    // 0x3759f0: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x3759f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x3759f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3759F4u;
    {
        const bool branch_taken_0x3759f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3759F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3759F4u;
        // 0x3759f8: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3759f4) {
            ctx->pc = 0x375A04u;
            goto label_375a04;
        }
    }
    ctx->pc = 0x3759FCu;
    // 0x3759fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3759FCu;
    {
        const bool branch_taken_0x3759fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3759FCu;
        // 0x375a00: 0xad400018  sw          $zero, 0x18($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3759fc) {
            ctx->pc = 0x375A08u;
            goto label_375a08;
        }
    }
    ctx->pc = 0x375A04u;
label_375a04:
    // 0x375a04: 0xad420018  sw          $v0, 0x18($t2)
    ctx->pc = 0x375a04u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 2));
label_375a08:
    // 0x375a08: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x375a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x375a0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x375A0Cu;
    {
        const bool branch_taken_0x375a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A0Cu;
        // 0x375a10: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375a0c) {
            ctx->pc = 0x375A1Cu;
            goto label_375a1c;
        }
    }
    ctx->pc = 0x375A14u;
    // 0x375a14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x375A14u;
    {
        const bool branch_taken_0x375a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A14u;
        // 0x375a18: 0xad40001c  sw          $zero, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375a14) {
            ctx->pc = 0x375A20u;
            goto label_375a20;
        }
    }
    ctx->pc = 0x375A1Cu;
label_375a1c:
    // 0x375a1c: 0xad42001c  sw          $v0, 0x1C($t2)
    ctx->pc = 0x375a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 2));
label_375a20:
    // 0x375a20: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x375a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x375a24: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x375a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x375a28: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x375a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x375a2c: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x375a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x375a30: 0x8d47000c  lw          $a3, 0xC($t2)
    ctx->pc = 0x375a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x375a34: 0x8d480010  lw          $t0, 0x10($t2)
    ctx->pc = 0x375a34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x375a38: 0x8d490014  lw          $t1, 0x14($t2)
    ctx->pc = 0x375a38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x375a3c: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x375a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x375a40: 0x8d4a0018  lw          $t2, 0x18($t2)
    ctx->pc = 0x375a40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x375a44: 0xad620024  sw          $v0, 0x24($t3)
    ctx->pc = 0x375a44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 2));
    // 0x375a48: 0xad6c0004  sw          $t4, 0x4($t3)
    ctx->pc = 0x375a48u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 12));
    // 0x375a4c: 0xad630008  sw          $v1, 0x8($t3)
    ctx->pc = 0x375a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    // 0x375a50: 0xad65000c  sw          $a1, 0xC($t3)
    ctx->pc = 0x375a50u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 5));
    // 0x375a54: 0xad660010  sw          $a2, 0x10($t3)
    ctx->pc = 0x375a54u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 6));
    // 0x375a58: 0xad670014  sw          $a3, 0x14($t3)
    ctx->pc = 0x375a58u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 7));
    // 0x375a5c: 0xad680018  sw          $t0, 0x18($t3)
    ctx->pc = 0x375a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 8));
    // 0x375a60: 0xad69001c  sw          $t1, 0x1C($t3)
    ctx->pc = 0x375a60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 9));
    // 0x375a64: 0xc0dd63a  jal         func_3758E8
    ctx->pc = 0x375A64u;
    SET_GPR_U32(ctx, 31, 0x375A6Cu);
    ctx->pc = 0x375A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A64u;
    // 0x375a68: 0xad6a0020  sw          $t2, 0x20($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3758E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3758E8u, 0x375A64u, 0x375A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A6Cu;
label_375a6c:
    // 0x375a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375a70: 0x3e00008  jr          $ra
    ctx->pc = 0x375A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A70u;
        // 0x375a74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375A78u;
}
