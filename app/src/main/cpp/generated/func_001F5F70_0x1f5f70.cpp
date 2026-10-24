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

// Function: func_001F5F70
// Address: 0x1f5f70 - 0x1f6078
void func_001F5F70_0x1f5f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F5F70_0x1f5f70");
#endif

    switch (ctx->pc) {
        case 0x1f5f70u: goto label_1f5f70;
        case 0x1f5f74u: goto label_1f5f74;
        case 0x1f5f78u: goto label_1f5f78;
        case 0x1f5f7cu: goto label_1f5f7c;
        case 0x1f5f80u: goto label_1f5f80;
        case 0x1f5f84u: goto label_1f5f84;
        case 0x1f5f88u: goto label_1f5f88;
        case 0x1f5f8cu: goto label_1f5f8c;
        case 0x1f5f90u: goto label_1f5f90;
        case 0x1f5f94u: goto label_1f5f94;
        case 0x1f5f98u: goto label_1f5f98;
        case 0x1f5f9cu: goto label_1f5f9c;
        case 0x1f5fa0u: goto label_1f5fa0;
        case 0x1f5fa4u: goto label_1f5fa4;
        case 0x1f5fa8u: goto label_1f5fa8;
        case 0x1f5facu: goto label_1f5fac;
        case 0x1f5fb0u: goto label_1f5fb0;
        case 0x1f5fb4u: goto label_1f5fb4;
        case 0x1f5fb8u: goto label_1f5fb8;
        case 0x1f5fbcu: goto label_1f5fbc;
        case 0x1f5fc0u: goto label_1f5fc0;
        case 0x1f5fc4u: goto label_1f5fc4;
        case 0x1f5fc8u: goto label_1f5fc8;
        case 0x1f5fccu: goto label_1f5fcc;
        case 0x1f5fd0u: goto label_1f5fd0;
        case 0x1f5fd4u: goto label_1f5fd4;
        case 0x1f5fd8u: goto label_1f5fd8;
        case 0x1f5fdcu: goto label_1f5fdc;
        case 0x1f5fe0u: goto label_1f5fe0;
        case 0x1f5fe4u: goto label_1f5fe4;
        case 0x1f5fe8u: goto label_1f5fe8;
        case 0x1f5fecu: goto label_1f5fec;
        case 0x1f5ff0u: goto label_1f5ff0;
        case 0x1f5ff4u: goto label_1f5ff4;
        case 0x1f5ff8u: goto label_1f5ff8;
        case 0x1f5ffcu: goto label_1f5ffc;
        case 0x1f6000u: goto label_1f6000;
        case 0x1f6004u: goto label_1f6004;
        case 0x1f6008u: goto label_1f6008;
        case 0x1f600cu: goto label_1f600c;
        case 0x1f6010u: goto label_1f6010;
        case 0x1f6014u: goto label_1f6014;
        case 0x1f6018u: goto label_1f6018;
        case 0x1f601cu: goto label_1f601c;
        case 0x1f6020u: goto label_1f6020;
        case 0x1f6024u: goto label_1f6024;
        case 0x1f6028u: goto label_1f6028;
        case 0x1f602cu: goto label_1f602c;
        case 0x1f6030u: goto label_1f6030;
        case 0x1f6034u: goto label_1f6034;
        case 0x1f6038u: goto label_1f6038;
        case 0x1f603cu: goto label_1f603c;
        case 0x1f6040u: goto label_1f6040;
        case 0x1f6044u: goto label_1f6044;
        case 0x1f6048u: goto label_1f6048;
        case 0x1f604cu: goto label_1f604c;
        case 0x1f6050u: goto label_1f6050;
        case 0x1f6054u: goto label_1f6054;
        case 0x1f6058u: goto label_1f6058;
        case 0x1f605cu: goto label_1f605c;
        case 0x1f6060u: goto label_1f6060;
        case 0x1f6064u: goto label_1f6064;
        case 0x1f6068u: goto label_1f6068;
        case 0x1f606cu: goto label_1f606c;
        case 0x1f6070u: goto label_1f6070;
        case 0x1f6074u: goto label_1f6074;
        default: break;
    }

    ctx->pc = 0x1f5f70u;

label_1f5f70:
    // 0x1f5f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f5f74:
    // 0x1f5f74: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1f5f78:
    // 0x1f5f78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f5f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f5f7c:
    // 0x1f5f7c: 0x2463f0f8  addiu       $v1, $v1, -0xF08
    ctx->pc = 0x1f5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963448));
label_1f5f80:
    // 0x1f5f80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5f84:
    // 0x1f5f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f88:
    // 0x1f5f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f5f8c:
    // 0x1f5f8c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1f5f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1f5f90:
    // 0x1f5f90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f5f94:
    // 0x1f5f94: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f5f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5f98:
    // 0x1f5f98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f5f9c:
    // 0x1f5f9c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1f5f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5fa0:
    // 0x1f5fa0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f5fa4:
    // 0x1f5fa4: 0x40f809  jalr        $v0
label_1f5fa8:
    if (ctx->pc == 0x1F5FA8u) {
        ctx->pc = 0x1F5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FA4u;
        // 0x1f5fa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FACu;
        goto label_1f5fac;
    }
    ctx->pc = 0x1F5FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5FACu);
        ctx->pc = 0x1F5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FA4u;
        // 0x1f5fa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5FA4u, 0x1F5FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5FACu;
label_1f5fac:
    // 0x1f5fac: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f5facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1f5fb0:
    // 0x1f5fb0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1f5fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_1f5fb4:
    // 0x1f5fb4: 0xdc627640  ld          $v0, 0x7640($v1)
    ctx->pc = 0x1f5fb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 30272)));
label_1f5fb8:
    // 0x1f5fb8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1f5fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1f5fbc:
    // 0x1f5fbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f5fc0:
    if (ctx->pc == 0x1F5FC0u) {
        ctx->pc = 0x1F5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FBCu;
        // 0x1f5fc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FC4u;
        goto label_1f5fc4;
    }
    ctx->pc = 0x1F5FBCu;
    {
        const bool branch_taken_0x1f5fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FBCu;
        // 0x1f5fc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fbc) {
            ctx->pc = 0x1F5FD0u;
            goto label_1f5fd0;
        }
    }
    ctx->pc = 0x1F5FC4u;
label_1f5fc4:
    // 0x1f5fc4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1f5fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1f5fc8:
    // 0x1f5fc8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1f5fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f5fcc:
    // 0x1f5fcc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1f5fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1f5fd0:
    // 0x1f5fd0: 0xc07d9a0  jal         func_1F6680
label_1f5fd4:
    if (ctx->pc == 0x1F5FD4u) {
        ctx->pc = 0x1F5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FD0u;
        // 0x1f5fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FD8u;
        goto label_1f5fd8;
    }
    ctx->pc = 0x1F5FD0u;
    SET_GPR_U32(ctx, 31, 0x1F5FD8u);
    ctx->pc = 0x1F5FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FD0u;
    // 0x1f5fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6680u, 0x1F5FD0u, 0x1F5FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FD8u;
label_1f5fd8:
    // 0x1f5fd8: 0xc07d9d6  jal         func_1F6758
label_1f5fdc:
    if (ctx->pc == 0x1F5FDCu) {
        ctx->pc = 0x1F5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FD8u;
        // 0x1f5fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FE0u;
        goto label_1f5fe0;
    }
    ctx->pc = 0x1F5FD8u;
    SET_GPR_U32(ctx, 31, 0x1F5FE0u);
    ctx->pc = 0x1F5FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FD8u;
    // 0x1f5fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6758u, 0x1F5FD8u, 0x1F5FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FE0u;
label_1f5fe0:
    // 0x1f5fe0: 0xc07da88  jal         func_1F6A20
label_1f5fe4:
    if (ctx->pc == 0x1F5FE4u) {
        ctx->pc = 0x1F5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FE0u;
        // 0x1f5fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FE8u;
        goto label_1f5fe8;
    }
    ctx->pc = 0x1F5FE0u;
    SET_GPR_U32(ctx, 31, 0x1F5FE8u);
    ctx->pc = 0x1F5FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FE0u;
    // 0x1f5fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A20u, 0x1F5FE0u, 0x1F5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FE8u;
label_1f5fe8:
    // 0x1f5fe8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f5fec:
    // 0x1f5fec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f5ff0:
    // 0x1f5ff0: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
label_1f5ff4:
    if (ctx->pc == 0x1F5FF4u) {
        ctx->pc = 0x1F5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FF0u;
        // 0x1f5ff4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FF8u;
        goto label_1f5ff8;
    }
    ctx->pc = 0x1F5FF0u;
    {
        const bool branch_taken_0x1f5ff0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1F5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FF0u;
        // 0x1f5ff4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ff0) {
            ctx->pc = 0x1F6060u;
            goto label_1f6060;
        }
    }
    ctx->pc = 0x1F5FF8u;
label_1f5ff8:
    // 0x1f5ff8: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x1f5ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1f5ffc:
    // 0x1f5ffc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f6000:
    if (ctx->pc == 0x1F6000u) {
        ctx->pc = 0x1F6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FFCu;
        // 0x1f6000: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6004u;
        goto label_1f6004;
    }
    ctx->pc = 0x1F5FFCu;
    {
        const bool branch_taken_0x1f5ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FFCu;
        // 0x1f6000: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ffc) {
            ctx->pc = 0x1F602Cu;
            goto label_1f602c;
        }
    }
    ctx->pc = 0x1F6004u;
label_1f6004:
    // 0x1f6004: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1f6004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1f6008:
    // 0x1f6008: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
label_1f600c:
    if (ctx->pc == 0x1F600Cu) {
        ctx->pc = 0x1F600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6008u;
        // 0x1f600c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6010u;
        goto label_1f6010;
    }
    ctx->pc = 0x1F6008u;
    {
        const bool branch_taken_0x1f6008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6008u;
        // 0x1f600c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6008) {
            ctx->pc = 0x1F6060u;
            goto label_1f6060;
        }
    }
    ctx->pc = 0x1F6010u;
label_1f6010:
    // 0x1f6010: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x1f6010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_1f6014:
    // 0x1f6014: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f6014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1f6018:
    // 0x1f6018: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f601c:
    // 0x1f601c: 0xc0b4584  jal         func_2D1610
label_1f6020:
    if (ctx->pc == 0x1F6020u) {
        ctx->pc = 0x1F6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F601Cu;
        // 0x1f6020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6024u;
        goto label_1f6024;
    }
    ctx->pc = 0x1F601Cu;
    SET_GPR_U32(ctx, 31, 0x1F6024u);
    ctx->pc = 0x1F6020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F601Cu;
    // 0x1f6020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1F601Cu, 0x1F6024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6024u;
label_1f6024:
    // 0x1f6024: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f6028:
    if (ctx->pc == 0x1F6028u) {
        ctx->pc = 0x1F6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6024u;
        // 0x1f6028: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F602Cu;
        goto label_1f602c;
    }
    ctx->pc = 0x1F6024u;
    {
        const bool branch_taken_0x1f6024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6024u;
        // 0x1f6028: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6024) {
            ctx->pc = 0x1F6064u;
            goto label_1f6064;
        }
    }
    ctx->pc = 0x1F602Cu;
label_1f602c:
    // 0x1f602c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1f602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1f6030:
    // 0x1f6030: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
label_1f6034:
    if (ctx->pc == 0x1F6034u) {
        ctx->pc = 0x1F6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6030u;
        // 0x1f6034: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6038u;
        goto label_1f6038;
    }
    ctx->pc = 0x1F6030u;
    {
        const bool branch_taken_0x1f6030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6030u;
        // 0x1f6034: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6030) {
            ctx->pc = 0x1F6060u;
            goto label_1f6060;
        }
    }
    ctx->pc = 0x1F6038u;
label_1f6038:
    // 0x1f6038: 0x2451ee00  addiu       $s1, $v0, -0x1200
    ctx->pc = 0x1f6038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_1f603c:
    // 0x1f603c: 0xc0b455e  jal         func_2D1578
label_1f6040:
    if (ctx->pc == 0x1F6040u) {
        ctx->pc = 0x1F6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F603Cu;
        // 0x1f6040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6044u;
        goto label_1f6044;
    }
    ctx->pc = 0x1F603Cu;
    SET_GPR_U32(ctx, 31, 0x1F6044u);
    ctx->pc = 0x1F6040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F603Cu;
    // 0x1f6040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1578u, 0x1F603Cu, 0x1F6044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6044u;
label_1f6044:
    // 0x1f6044: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1f6048:
    if (ctx->pc == 0x1F6048u) {
        ctx->pc = 0x1F6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6044u;
        // 0x1f6048: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F604Cu;
        goto label_1f604c;
    }
    ctx->pc = 0x1F6044u;
    {
        const bool branch_taken_0x1f6044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6044) {
            ctx->pc = 0x1F6048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6044u;
            // 0x1f6048: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6064u;
            goto label_1f6064;
        }
    }
    ctx->pc = 0x1F604Cu;
label_1f604c:
    // 0x1f604c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1f604cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1f6050:
    // 0x1f6050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6054:
    // 0x1f6054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6058:
    // 0x1f6058: 0xc0b4584  jal         func_2D1610
label_1f605c:
    if (ctx->pc == 0x1F605Cu) {
        ctx->pc = 0x1F605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6058u;
        // 0x1f605c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6060u;
        goto label_1f6060;
    }
    ctx->pc = 0x1F6058u;
    SET_GPR_U32(ctx, 31, 0x1F6060u);
    ctx->pc = 0x1F605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6058u;
    // 0x1f605c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1F6058u, 0x1F6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6060u;
label_1f6060:
    // 0x1f6060: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f6060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6064:
    // 0x1f6064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f6064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6068:
    // 0x1f6068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f606c:
    // 0x1f606c: 0x3e00008  jr          $ra
label_1f6070:
    if (ctx->pc == 0x1F6070u) {
        ctx->pc = 0x1F6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F606Cu;
        // 0x1f6070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6074u;
        goto label_1f6074;
    }
    ctx->pc = 0x1F606Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F606Cu;
        // 0x1f6070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F606Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6074u;
label_1f6074:
    // 0x1f6074: 0x0  nop
    ctx->pc = 0x1f6074u;
    // NOP
    ctx->pc = 0x1f6078u;
}
