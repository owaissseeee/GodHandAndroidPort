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

// Function: Pool_createObjWithScale
// Address: 0x2b9df0 - 0x2b9ef0
void Pool_createObjWithScale_0x2b9df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pool_createObjWithScale_0x2b9df0");
#endif

    switch (ctx->pc) {
        case 0x2b9df0u: goto label_2b9df0;
        case 0x2b9df4u: goto label_2b9df4;
        case 0x2b9df8u: goto label_2b9df8;
        case 0x2b9dfcu: goto label_2b9dfc;
        case 0x2b9e00u: goto label_2b9e00;
        case 0x2b9e04u: goto label_2b9e04;
        case 0x2b9e08u: goto label_2b9e08;
        case 0x2b9e0cu: goto label_2b9e0c;
        case 0x2b9e10u: goto label_2b9e10;
        case 0x2b9e14u: goto label_2b9e14;
        case 0x2b9e18u: goto label_2b9e18;
        case 0x2b9e1cu: goto label_2b9e1c;
        case 0x2b9e20u: goto label_2b9e20;
        case 0x2b9e24u: goto label_2b9e24;
        case 0x2b9e28u: goto label_2b9e28;
        case 0x2b9e2cu: goto label_2b9e2c;
        case 0x2b9e30u: goto label_2b9e30;
        case 0x2b9e34u: goto label_2b9e34;
        case 0x2b9e38u: goto label_2b9e38;
        case 0x2b9e3cu: goto label_2b9e3c;
        case 0x2b9e40u: goto label_2b9e40;
        case 0x2b9e44u: goto label_2b9e44;
        case 0x2b9e48u: goto label_2b9e48;
        case 0x2b9e4cu: goto label_2b9e4c;
        case 0x2b9e50u: goto label_2b9e50;
        case 0x2b9e54u: goto label_2b9e54;
        case 0x2b9e58u: goto label_2b9e58;
        case 0x2b9e5cu: goto label_2b9e5c;
        case 0x2b9e60u: goto label_2b9e60;
        case 0x2b9e64u: goto label_2b9e64;
        case 0x2b9e68u: goto label_2b9e68;
        case 0x2b9e6cu: goto label_2b9e6c;
        case 0x2b9e70u: goto label_2b9e70;
        case 0x2b9e74u: goto label_2b9e74;
        case 0x2b9e78u: goto label_2b9e78;
        case 0x2b9e7cu: goto label_2b9e7c;
        case 0x2b9e80u: goto label_2b9e80;
        case 0x2b9e84u: goto label_2b9e84;
        case 0x2b9e88u: goto label_2b9e88;
        case 0x2b9e8cu: goto label_2b9e8c;
        case 0x2b9e90u: goto label_2b9e90;
        case 0x2b9e94u: goto label_2b9e94;
        case 0x2b9e98u: goto label_2b9e98;
        case 0x2b9e9cu: goto label_2b9e9c;
        case 0x2b9ea0u: goto label_2b9ea0;
        case 0x2b9ea4u: goto label_2b9ea4;
        case 0x2b9ea8u: goto label_2b9ea8;
        case 0x2b9eacu: goto label_2b9eac;
        case 0x2b9eb0u: goto label_2b9eb0;
        case 0x2b9eb4u: goto label_2b9eb4;
        case 0x2b9eb8u: goto label_2b9eb8;
        case 0x2b9ebcu: goto label_2b9ebc;
        case 0x2b9ec0u: goto label_2b9ec0;
        case 0x2b9ec4u: goto label_2b9ec4;
        case 0x2b9ec8u: goto label_2b9ec8;
        case 0x2b9eccu: goto label_2b9ecc;
        case 0x2b9ed0u: goto label_2b9ed0;
        case 0x2b9ed4u: goto label_2b9ed4;
        case 0x2b9ed8u: goto label_2b9ed8;
        case 0x2b9edcu: goto label_2b9edc;
        case 0x2b9ee0u: goto label_2b9ee0;
        case 0x2b9ee4u: goto label_2b9ee4;
        case 0x2b9ee8u: goto label_2b9ee8;
        case 0x2b9eecu: goto label_2b9eec;
        default: break;
    }

    ctx->pc = 0x2b9df0u;

label_2b9df0:
    // 0x2b9df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b9df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b9df4:
    // 0x2b9df4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b9df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2b9df8:
    // 0x2b9df8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b9df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2b9dfc:
    // 0x2b9dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e00:
    // 0x2b9e00: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b9e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2b9e04:
    // 0x2b9e04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b9e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e08:
    // 0x2b9e08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2b9e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2b9e0c:
    // 0x2b9e0c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2b9e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e10:
    // 0x2b9e10: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2b9e10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2b9e14:
    // 0x2b9e14: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2b9e14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e18:
    // 0x2b9e18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b9e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2b9e1c:
    // 0x2b9e1c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b9e1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2b9e20:
    // 0x2b9e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b9e24:
    // 0x2b9e24: 0xc0ae8c0  jal         func_2BA300
label_2b9e28:
    if (ctx->pc == 0x2B9E28u) {
        ctx->pc = 0x2B9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E24u;
        // 0x2b9e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E2Cu;
        goto label_2b9e2c;
    }
    ctx->pc = 0x2B9E24u;
    SET_GPR_U32(ctx, 31, 0x2B9E2Cu);
    ctx->pc = 0x2B9E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E24u;
    // 0x2b9e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA300u, 0x2B9E24u, 0x2B9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E2Cu;
label_2b9e2c:
    // 0x2b9e2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b9e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e30:
    // 0x2b9e30: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_2b9e34:
    if (ctx->pc == 0x2B9E34u) {
        ctx->pc = 0x2B9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E30u;
        // 0x2b9e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E38u;
        goto label_2b9e38;
    }
    ctx->pc = 0x2B9E30u;
    {
        const bool branch_taken_0x2b9e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E30u;
        // 0x2b9e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e30) {
            ctx->pc = 0x2B9EC0u;
            goto label_2b9ec0;
        }
    }
    ctx->pc = 0x2B9E38u;
label_2b9e38:
    // 0x2b9e38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9e3c:
    // 0x2b9e3c: 0x30420201  andi        $v0, $v0, 0x201
    ctx->pc = 0x2b9e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)513);
label_2b9e40:
    // 0x2b9e40: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b9e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b9e44:
    // 0x2b9e44: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2b9e48:
    if (ctx->pc == 0x2B9E48u) {
        ctx->pc = 0x2B9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E44u;
        // 0x2b9e48: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E4Cu;
        goto label_2b9e4c;
    }
    ctx->pc = 0x2B9E44u;
    {
        const bool branch_taken_0x2b9e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e44) {
            ctx->pc = 0x2B9E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E44u;
            // 0x2b9e48: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9EA8u;
            goto label_2b9ea8;
        }
    }
    ctx->pc = 0x2B9E4Cu;
label_2b9e4c:
    // 0x2b9e4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b9e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e50:
    // 0x2b9e50: 0xc0ae29c  jal         func_2B8A70
label_2b9e54:
    if (ctx->pc == 0x2B9E54u) {
        ctx->pc = 0x2B9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E50u;
        // 0x2b9e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E58u;
        goto label_2b9e58;
    }
    ctx->pc = 0x2B9E50u;
    SET_GPR_U32(ctx, 31, 0x2B9E58u);
    ctx->pc = 0x2B9E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E50u;
    // 0x2b9e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A70u, 0x2B9E50u, 0x2B9E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E58u;
label_2b9e58:
    // 0x2b9e58: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x2b9e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_2b9e5c:
    // 0x2b9e5c: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x2b9e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
label_2b9e60:
    // 0x2b9e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e64:
    // 0x2b9e64: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b9e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e68:
    // 0x2b9e68: 0x24e77b00  addiu       $a3, $a3, 0x7B00
    ctx->pc = 0x2b9e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31488));
label_2b9e6c:
    // 0x2b9e6c: 0xc0aec58  jal         func_2BB160
label_2b9e70:
    if (ctx->pc == 0x2B9E70u) {
        ctx->pc = 0x2B9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E6Cu;
        // 0x2b9e70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E74u;
        goto label_2b9e74;
    }
    ctx->pc = 0x2B9E6Cu;
    SET_GPR_U32(ctx, 31, 0x2B9E74u);
    ctx->pc = 0x2B9E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E6Cu;
    // 0x2b9e70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB160u, 0x2B9E6Cu, 0x2B9E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E74u;
label_2b9e74:
    // 0x2b9e74: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2b9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_2b9e78:
    // 0x2b9e78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b9e78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b9e7c:
    // 0x2b9e7c: 0x2463bd60  addiu       $v1, $v1, -0x42A0
    ctx->pc = 0x2b9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950240));
label_2b9e80:
    // 0x2b9e80: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2b9e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_2b9e84:
    // 0x2b9e84: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x2b9e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_2b9e88:
    // 0x2b9e88: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x2b9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2b9e8c:
    // 0x2b9e8c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2b9e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2b9e90:
    // 0x2b9e90: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2b9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2b9e94:
    // 0x2b9e94: 0x60f809  jalr        $v1
label_2b9e98:
    if (ctx->pc == 0x2B9E98u) {
        ctx->pc = 0x2B9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E94u;
        // 0x2b9e98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E9Cu;
        goto label_2b9e9c;
    }
    ctx->pc = 0x2B9E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9E9Cu);
        ctx->pc = 0x2B9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E94u;
        // 0x2b9e98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9E94u, 0x2B9E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9E9Cu;
label_2b9e9c:
    // 0x2b9e9c: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x2b9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_2b9ea0:
    // 0x2b9ea0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b9ea4:
    if (ctx->pc == 0x2B9EA4u) {
        ctx->pc = 0x2B9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EA0u;
        // 0x2b9ea4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EA8u;
        goto label_2b9ea8;
    }
    ctx->pc = 0x2B9EA0u;
    {
        const bool branch_taken_0x2b9ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EA0u;
        // 0x2b9ea4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ea0) {
            ctx->pc = 0x2B9EC0u;
            goto label_2b9ec0;
        }
    }
    ctx->pc = 0x2B9EA8u;
label_2b9ea8:
    // 0x2b9ea8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9eac:
    // 0x2b9eac: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2b9eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2b9eb0:
    // 0x2b9eb0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2b9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b9eb4:
    // 0x2b9eb4: 0x60f809  jalr        $v1
label_2b9eb8:
    if (ctx->pc == 0x2B9EB8u) {
        ctx->pc = 0x2B9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EB4u;
        // 0x2b9eb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EBCu;
        goto label_2b9ebc;
    }
    ctx->pc = 0x2B9EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9EBCu);
        ctx->pc = 0x2B9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EB4u;
        // 0x2b9eb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9EB4u, 0x2B9EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9EBCu;
label_2b9ebc:
    // 0x2b9ebc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b9ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ec0:
    // 0x2b9ec0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b9ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9ec4:
    // 0x2b9ec4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b9ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b9ec8:
    // 0x2b9ec8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b9ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b9ecc:
    // 0x2b9ecc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b9eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9ed0:
    // 0x2b9ed0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2b9ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9ed4:
    // 0x2b9ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9ed8:
    // 0x2b9ed8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2b9ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b9edc:
    // 0x2b9edc: 0x3e00008  jr          $ra
label_2b9ee0:
    if (ctx->pc == 0x2B9EE0u) {
        ctx->pc = 0x2B9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EDCu;
        // 0x2b9ee0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EE4u;
        goto label_2b9ee4;
    }
    ctx->pc = 0x2B9EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EDCu;
        // 0x2b9ee0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9EE4u;
label_2b9ee4:
    // 0x2b9ee4: 0x0  nop
    ctx->pc = 0x2b9ee4u;
    // NOP
label_2b9ee8:
    // 0x2b9ee8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b9eec:
    // 0x2b9eec: 0x0  nop
    ctx->pc = 0x2b9eecu;
    // NOP
    ctx->pc = 0x2b9ef0u;
}
