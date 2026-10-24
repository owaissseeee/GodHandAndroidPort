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

// Function: InitTimer
// Address: 0x3b6a30 - 0x3b6b90
void InitTimer_0x3b6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTimer_0x3b6a30");
#endif

    switch (ctx->pc) {
        case 0x3b6a8cu: goto label_3b6a8c;
        case 0x3b6aa0u: goto label_3b6aa0;
        case 0x3b6ac8u: goto label_3b6ac8;
        case 0x3b6ae0u: goto label_3b6ae0;
        case 0x3b6b00u: goto label_3b6b00;
        case 0x3b6b38u: goto label_3b6b38;
        case 0x3b6b40u: goto label_3b6b40;
        case 0x3b6b48u: goto label_3b6b48;
        case 0x3b6b50u: goto label_3b6b50;
        case 0x3b6b60u: goto label_3b6b60;
        default: break;
    }

    ctx->pc = 0x3b6a30u;

    // 0x3b6a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b6a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b6a34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b6a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b6a38: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b6a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b6a3c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3b6a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x3b6a40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b6a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b6a44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b6a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b6a48: 0x2651be90  addiu       $s1, $s2, -0x4170
    ctx->pc = 0x3b6a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950544));
    // 0x3b6a4c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b6a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b6a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b6a54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3b6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBE98u));
    // 0x3b6a58: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6A58u;
    {
        const bool branch_taken_0x3b6a58 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A58u;
        // 0x3b6a5c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6a58) {
            ctx->pc = 0x3B6A6Cu;
            goto label_3b6a6c;
        }
    }
    ctx->pc = 0x3B6A60u;
    // 0x3b6a60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b6a64: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3B6A64u;
    {
        const bool branch_taken_0x3b6a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A64u;
        // 0x3b6a68: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6a64) {
            ctx->pc = 0x3B6B64u;
            goto label_3b6b64;
        }
    }
    ctx->pc = 0x3B6A6Cu;
label_3b6a6c:
    // 0x3b6a6c: 0x3c130078  lui         $s3, 0x78
    ctx->pc = 0x3b6a6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)120 << 16));
    // 0x3b6a70: 0xfe40be90  sd          $zero, -0x4170($s2)
    ctx->pc = 0x3b6a70u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294950544), GPR_U64(ctx, 0));
    // 0x3b6a74: 0x26701c40  addiu       $s0, $s3, 0x1C40
    ctx->pc = 0x3b6a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 7232));
    // 0x3b6a78: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3b6a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3b6a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b6a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6a84: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3B6A84u;
    SET_GPR_U32(ctx, 31, 0x3B6A8Cu);
    ctx->pc = 0x3B6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A84u;
    // 0x3b6a88: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3B6A84u, 0x3B6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6A8Cu;
label_3b6a8c:
    // 0x3b6a8c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x3b6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x3b6a90: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x3b6a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x3b6a94: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x3b6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3b6a98: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x3b6a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x3b6a9c: 0x0  nop
    ctx->pc = 0x3b6a9cu;
    // NOP
label_3b6aa0:
    // 0x3b6aa0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b6aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3b6aa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b6aa8: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x3b6aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x3b6aac: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x3b6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x3b6ab0: 0x0  nop
    ctx->pc = 0x3b6ab0u;
    // NOP
    // 0x3b6ab4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B6AB4u;
    {
        const bool branch_taken_0x3b6ab4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3b6ab4) {
            ctx->pc = 0x3B6AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6aa0;
        }
    }
    ctx->pc = 0x3B6ABCu;
    // 0x3b6abc: 0x26621c40  addiu       $v0, $s3, 0x1C40
    ctx->pc = 0x3b6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 7232));
    // 0x3b6ac0: 0xc0eddae  jal         func_3B76B8
    ctx->pc = 0x3B6AC0u;
    SET_GPR_U32(ctx, 31, 0x3B6AC8u);
    ctx->pc = 0x3B6AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6AC0u;
    // 0x3b6ac4: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B76B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B76B8u, 0x3B6AC0u, 0x3B6AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6AC8u;
label_3b6ac8:
    // 0x3b6ac8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b6ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b6acc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x3b6accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3b6ad0: 0x24a56e78  addiu       $a1, $a1, 0x6E78
    ctx->pc = 0x3b6ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28280));
    // 0x3b6ad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b6ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6ad8: 0xc0ebe64  jal         func_3AF990
    ctx->pc = 0x3B6AD8u;
    SET_GPR_U32(ctx, 31, 0x3B6AE0u);
    ctx->pc = 0x3B6ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6AD8u;
    // 0x3b6adc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF990u, 0x3B6AD8u, 0x3B6AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6AE0u;
label_3b6ae0:
    // 0x3b6ae0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b6ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6ae4: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6AE4u;
    {
        const bool branch_taken_0x3b6ae4 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x3b6ae4) {
            ctx->pc = 0x3B6AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6AE4u;
            // 0x3b6ae8: 0x2642be90  addiu       $v0, $s2, -0x4170 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6AF8u;
            goto label_3b6af8;
        }
    }
    ctx->pc = 0x3B6AECu;
    // 0x3b6aec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b6af0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3B6AF0u;
    {
        const bool branch_taken_0x3b6af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AF0u;
        // 0x3b6af4: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6af0) {
            ctx->pc = 0x3B6B64u;
            goto label_3b6b64;
        }
    }
    ctx->pc = 0x3B6AF8u;
label_3b6af8:
    // 0x3b6af8: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B6AF8u;
    SET_GPR_U32(ctx, 31, 0x3B6B00u);
    ctx->pc = 0x3B6AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6AF8u;
    // 0x3b6afc: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B6AF8u, 0x3B6B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B00u;
label_3b6b00:
    // 0x3b6b00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3b6b04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b6b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6b08: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x3b6b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x3b6b0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3b6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3b6b10: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3b6b10u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u));
    // 0x3b6b14: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3b6b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3b6b18: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3b6b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3b6b1c: 0x548025  or          $s0, $v0, $s4
    ctx->pc = 0x3b6b1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x3b6b20: 0x36100300  ori         $s0, $s0, 0x300
    ctx->pc = 0x3b6b20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)768);
    // 0x3b6b24: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x3b6b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x3b6b28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B6B28u;
    {
        const bool branch_taken_0x3b6b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B28u;
        // 0x3b6b2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6b28) {
            ctx->pc = 0x3B6B40u;
            goto label_3b6b40;
        }
    }
    ctx->pc = 0x3B6B30u;
    // 0x3b6b30: 0xc0eda80  jal         func_3B6A00
    ctx->pc = 0x3B6B30u;
    SET_GPR_U32(ctx, 31, 0x3B6B38u);
    ctx->pc = 0x3B6B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B30u;
    // 0x3b6b34: 0x36100c80  ori         $s0, $s0, 0xC80 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A00u, 0x3B6B30u, 0x3B6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B38u;
label_3b6b38:
    // 0x3b6b38: 0xc0eda88  jal         func_3B6A20
    ctx->pc = 0x3B6B38u;
    SET_GPR_U32(ctx, 31, 0x3B6B40u);
    ctx->pc = 0x3B6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B38u;
    // 0x3b6b3c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A20u, 0x3B6B38u, 0x3B6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B40u;
label_3b6b40:
    // 0x3b6b40: 0xc0eda84  jal         func_3B6A10
    ctx->pc = 0x3B6B40u;
    SET_GPR_U32(ctx, 31, 0x3B6B48u);
    ctx->pc = 0x3B6B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B40u;
    // 0x3b6b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A10u, 0x3B6B40u, 0x3B6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B48u;
label_3b6b48:
    // 0x3b6b48: 0xc0ec1d0  jal         func_3B0740
    ctx->pc = 0x3B6B48u;
    SET_GPR_U32(ctx, 31, 0x3B6B50u);
    ctx->pc = 0x3B6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B48u;
    // 0x3b6b4c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0740u, 0x3B6B48u, 0x3B6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B50u;
label_3b6b50:
    // 0x3b6b50: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6B50u;
    {
        const bool branch_taken_0x3b6b50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B50u;
        // 0x3b6b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6b50) {
            ctx->pc = 0x3B6B64u;
            goto label_3b6b64;
        }
    }
    ctx->pc = 0x3B6B58u;
    // 0x3b6b58: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B6B58u;
    SET_GPR_U32(ctx, 31, 0x3B6B60u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B6B58u, 0x3B6B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B60u;
label_3b6b60:
    // 0x3b6b60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b6b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6b64:
    // 0x3b6b64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b6b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b6b68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b6b68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b6b6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b6b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b6b70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b6b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b6b74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b6b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b6b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B7Cu;
        // 0x3b6b80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6B84u;
    // 0x3b6b84: 0x0  nop
    ctx->pc = 0x3b6b84u;
    // NOP
    // 0x3b6b88: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3b6b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3b6b8c: 0x0  nop
    ctx->pc = 0x3b6b8cu;
    // NOP
    ctx->pc = 0x3b6b90u;
}
