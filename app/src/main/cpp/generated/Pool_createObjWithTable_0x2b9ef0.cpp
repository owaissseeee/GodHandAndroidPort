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

// Function: Pool_createObjWithTable
// Address: 0x2b9ef0 - 0x2ba020
void Pool_createObjWithTable_0x2b9ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pool_createObjWithTable_0x2b9ef0");
#endif

    switch (ctx->pc) {
        case 0x2b9ef0u: goto label_2b9ef0;
        case 0x2b9ef4u: goto label_2b9ef4;
        case 0x2b9ef8u: goto label_2b9ef8;
        case 0x2b9efcu: goto label_2b9efc;
        case 0x2b9f00u: goto label_2b9f00;
        case 0x2b9f04u: goto label_2b9f04;
        case 0x2b9f08u: goto label_2b9f08;
        case 0x2b9f0cu: goto label_2b9f0c;
        case 0x2b9f10u: goto label_2b9f10;
        case 0x2b9f14u: goto label_2b9f14;
        case 0x2b9f18u: goto label_2b9f18;
        case 0x2b9f1cu: goto label_2b9f1c;
        case 0x2b9f20u: goto label_2b9f20;
        case 0x2b9f24u: goto label_2b9f24;
        case 0x2b9f28u: goto label_2b9f28;
        case 0x2b9f2cu: goto label_2b9f2c;
        case 0x2b9f30u: goto label_2b9f30;
        case 0x2b9f34u: goto label_2b9f34;
        case 0x2b9f38u: goto label_2b9f38;
        case 0x2b9f3cu: goto label_2b9f3c;
        case 0x2b9f40u: goto label_2b9f40;
        case 0x2b9f44u: goto label_2b9f44;
        case 0x2b9f48u: goto label_2b9f48;
        case 0x2b9f4cu: goto label_2b9f4c;
        case 0x2b9f50u: goto label_2b9f50;
        case 0x2b9f54u: goto label_2b9f54;
        case 0x2b9f58u: goto label_2b9f58;
        case 0x2b9f5cu: goto label_2b9f5c;
        case 0x2b9f60u: goto label_2b9f60;
        case 0x2b9f64u: goto label_2b9f64;
        case 0x2b9f68u: goto label_2b9f68;
        case 0x2b9f6cu: goto label_2b9f6c;
        case 0x2b9f70u: goto label_2b9f70;
        case 0x2b9f74u: goto label_2b9f74;
        case 0x2b9f78u: goto label_2b9f78;
        case 0x2b9f7cu: goto label_2b9f7c;
        case 0x2b9f80u: goto label_2b9f80;
        case 0x2b9f84u: goto label_2b9f84;
        case 0x2b9f88u: goto label_2b9f88;
        case 0x2b9f8cu: goto label_2b9f8c;
        case 0x2b9f90u: goto label_2b9f90;
        case 0x2b9f94u: goto label_2b9f94;
        case 0x2b9f98u: goto label_2b9f98;
        case 0x2b9f9cu: goto label_2b9f9c;
        case 0x2b9fa0u: goto label_2b9fa0;
        case 0x2b9fa4u: goto label_2b9fa4;
        case 0x2b9fa8u: goto label_2b9fa8;
        case 0x2b9facu: goto label_2b9fac;
        case 0x2b9fb0u: goto label_2b9fb0;
        case 0x2b9fb4u: goto label_2b9fb4;
        case 0x2b9fb8u: goto label_2b9fb8;
        case 0x2b9fbcu: goto label_2b9fbc;
        case 0x2b9fc0u: goto label_2b9fc0;
        case 0x2b9fc4u: goto label_2b9fc4;
        case 0x2b9fc8u: goto label_2b9fc8;
        case 0x2b9fccu: goto label_2b9fcc;
        case 0x2b9fd0u: goto label_2b9fd0;
        case 0x2b9fd4u: goto label_2b9fd4;
        case 0x2b9fd8u: goto label_2b9fd8;
        case 0x2b9fdcu: goto label_2b9fdc;
        case 0x2b9fe0u: goto label_2b9fe0;
        case 0x2b9fe4u: goto label_2b9fe4;
        case 0x2b9fe8u: goto label_2b9fe8;
        case 0x2b9fecu: goto label_2b9fec;
        case 0x2b9ff0u: goto label_2b9ff0;
        case 0x2b9ff4u: goto label_2b9ff4;
        case 0x2b9ff8u: goto label_2b9ff8;
        case 0x2b9ffcu: goto label_2b9ffc;
        case 0x2ba000u: goto label_2ba000;
        case 0x2ba004u: goto label_2ba004;
        case 0x2ba008u: goto label_2ba008;
        case 0x2ba00cu: goto label_2ba00c;
        case 0x2ba010u: goto label_2ba010;
        case 0x2ba014u: goto label_2ba014;
        case 0x2ba018u: goto label_2ba018;
        case 0x2ba01cu: goto label_2ba01c;
        default: break;
    }

    ctx->pc = 0x2b9ef0u;

label_2b9ef0:
    // 0x2b9ef0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b9ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2b9ef4:
    // 0x2b9ef4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b9ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2b9ef8:
    // 0x2b9ef8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b9ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2b9efc:
    // 0x2b9efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f00:
    // 0x2b9f00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b9f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b9f04:
    // 0x2b9f04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b9f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f08:
    // 0x2b9f08: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2b9f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2b9f0c:
    // 0x2b9f0c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2b9f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f10:
    // 0x2b9f10: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2b9f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2b9f14:
    // 0x2b9f14: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2b9f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f18:
    // 0x2b9f18: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2b9f18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2b9f1c:
    // 0x2b9f1c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2b9f1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f20:
    // 0x2b9f20: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2b9f20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2b9f24:
    // 0x2b9f24: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2b9f24u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_2b9f28:
    // 0x2b9f28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b9f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2b9f2c:
    // 0x2b9f2c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2b9f2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_2b9f30:
    // 0x2b9f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b9f34:
    // 0x2b9f34: 0xc0ae8c0  jal         func_2BA300
label_2b9f38:
    if (ctx->pc == 0x2B9F38u) {
        ctx->pc = 0x2B9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F34u;
        // 0x2b9f38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F3Cu;
        goto label_2b9f3c;
    }
    ctx->pc = 0x2B9F34u;
    SET_GPR_U32(ctx, 31, 0x2B9F3Cu);
    ctx->pc = 0x2B9F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F34u;
    // 0x2b9f38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA300u, 0x2B9F34u, 0x2B9F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F3Cu;
label_2b9f3c:
    // 0x2b9f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b9f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f40:
    // 0x2b9f40: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_2b9f44:
    if (ctx->pc == 0x2B9F44u) {
        ctx->pc = 0x2B9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F40u;
        // 0x2b9f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F48u;
        goto label_2b9f48;
    }
    ctx->pc = 0x2B9F40u;
    {
        const bool branch_taken_0x2b9f40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F40u;
        // 0x2b9f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f40) {
            ctx->pc = 0x2B9FE8u;
            goto label_2b9fe8;
        }
    }
    ctx->pc = 0x2B9F48u;
label_2b9f48:
    // 0x2b9f48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9f4c:
    // 0x2b9f4c: 0x30420201  andi        $v0, $v0, 0x201
    ctx->pc = 0x2b9f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)513);
label_2b9f50:
    // 0x2b9f50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b9f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b9f54:
    // 0x2b9f54: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2b9f58:
    if (ctx->pc == 0x2B9F58u) {
        ctx->pc = 0x2B9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F54u;
        // 0x2b9f58: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F5Cu;
        goto label_2b9f5c;
    }
    ctx->pc = 0x2B9F54u;
    {
        const bool branch_taken_0x2b9f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f54) {
            ctx->pc = 0x2B9F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9F54u;
            // 0x2b9f58: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9FD0u;
            goto label_2b9fd0;
        }
    }
    ctx->pc = 0x2B9F5Cu;
label_2b9f5c:
    // 0x2b9f5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b9f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f60:
    // 0x2b9f60: 0xc0ae29c  jal         func_2B8A70
label_2b9f64:
    if (ctx->pc == 0x2B9F64u) {
        ctx->pc = 0x2B9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F60u;
        // 0x2b9f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F68u;
        goto label_2b9f68;
    }
    ctx->pc = 0x2B9F60u;
    SET_GPR_U32(ctx, 31, 0x2B9F68u);
    ctx->pc = 0x2B9F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F60u;
    // 0x2b9f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A70u, 0x2B9F60u, 0x2B9F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F68u;
label_2b9f68:
    // 0x2b9f68: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x2b9f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_2b9f6c:
    // 0x2b9f6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b9f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f70:
    // 0x2b9f70: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b9f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f74:
    // 0x2b9f74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b9f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f78:
    // 0x2b9f78: 0xc0aec58  jal         func_2BB160
label_2b9f7c:
    if (ctx->pc == 0x2B9F7Cu) {
        ctx->pc = 0x2B9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F78u;
        // 0x2b9f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F80u;
        goto label_2b9f80;
    }
    ctx->pc = 0x2B9F78u;
    SET_GPR_U32(ctx, 31, 0x2B9F80u);
    ctx->pc = 0x2B9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F78u;
    // 0x2b9f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB160u, 0x2B9F78u, 0x2B9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F80u;
label_2b9f80:
    // 0x2b9f80: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2b9f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_2b9f84:
    // 0x2b9f84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b9f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9f88:
    // 0x2b9f88: 0x2463bca0  addiu       $v1, $v1, -0x4360
    ctx->pc = 0x2b9f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950048));
label_2b9f8c:
    // 0x2b9f8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b9f8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b9f90:
    // 0x2b9f90: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2b9f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_2b9f94:
    // 0x2b9f94: 0xae2400e0  sw          $a0, 0xE0($s1)
    ctx->pc = 0x2b9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 4));
label_2b9f98:
    // 0x2b9f98: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x2b9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2b9f9c:
    // 0x2b9f9c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2b9f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2b9fa0:
    // 0x2b9fa0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2b9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2b9fa4:
    // 0x2b9fa4: 0x60f809  jalr        $v1
label_2b9fa8:
    if (ctx->pc == 0x2B9FA8u) {
        ctx->pc = 0x2B9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA4u;
        // 0x2b9fa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FACu;
        goto label_2b9fac;
    }
    ctx->pc = 0x2B9FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9FACu);
        ctx->pc = 0x2B9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA4u;
        // 0x2b9fa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9FA4u, 0x2B9FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9FACu;
label_2b9fac:
    // 0x2b9fac: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x2b9facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2b9fb0:
    // 0x2b9fb0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b9fb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2b9fb4:
    // 0x2b9fb4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x2b9fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_2b9fb8:
    // 0x2b9fb8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2b9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2b9fbc:
    // 0x2b9fbc: 0x60f809  jalr        $v1
label_2b9fc0:
    if (ctx->pc == 0x2B9FC0u) {
        ctx->pc = 0x2B9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FBCu;
        // 0x2b9fc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FC4u;
        goto label_2b9fc4;
    }
    ctx->pc = 0x2B9FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9FC4u);
        ctx->pc = 0x2B9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FBCu;
        // 0x2b9fc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9FBCu, 0x2B9FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9FC4u;
label_2b9fc4:
    // 0x2b9fc4: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x2b9fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_2b9fc8:
    // 0x2b9fc8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b9fcc:
    if (ctx->pc == 0x2B9FCCu) {
        ctx->pc = 0x2B9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FC8u;
        // 0x2b9fcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FD0u;
        goto label_2b9fd0;
    }
    ctx->pc = 0x2B9FC8u;
    {
        const bool branch_taken_0x2b9fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FC8u;
        // 0x2b9fcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fc8) {
            ctx->pc = 0x2B9FE8u;
            goto label_2b9fe8;
        }
    }
    ctx->pc = 0x2B9FD0u;
label_2b9fd0:
    // 0x2b9fd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9fd4:
    // 0x2b9fd4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2b9fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2b9fd8:
    // 0x2b9fd8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2b9fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b9fdc:
    // 0x2b9fdc: 0x60f809  jalr        $v1
label_2b9fe0:
    if (ctx->pc == 0x2B9FE0u) {
        ctx->pc = 0x2B9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FDCu;
        // 0x2b9fe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FE4u;
        goto label_2b9fe4;
    }
    ctx->pc = 0x2B9FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9FE4u);
        ctx->pc = 0x2B9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FDCu;
        // 0x2b9fe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9FDCu, 0x2B9FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9FE4u;
label_2b9fe4:
    // 0x2b9fe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b9fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9fe8:
    // 0x2b9fe8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b9fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b9fec:
    // 0x2b9fec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b9fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9ff0:
    // 0x2b9ff0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b9ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b9ff4:
    // 0x2b9ff4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b9ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b9ff8:
    // 0x2b9ff8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2b9ff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9ffc:
    // 0x2b9ffc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2b9ffcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba000:
    // 0x2ba000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba004:
    // 0x2ba004: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2ba004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ba008:
    // 0x2ba008: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2ba008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ba00c:
    // 0x2ba00c: 0x3e00008  jr          $ra
label_2ba010:
    if (ctx->pc == 0x2BA010u) {
        ctx->pc = 0x2BA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA00Cu;
        // 0x2ba010: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA014u;
        goto label_2ba014;
    }
    ctx->pc = 0x2BA00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA00Cu;
        // 0x2ba010: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA014u;
label_2ba014:
    // 0x2ba014: 0x0  nop
    ctx->pc = 0x2ba014u;
    // NOP
label_2ba018:
    // 0x2ba018: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ba018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ba01c:
    // 0x2ba01c: 0x0  nop
    ctx->pc = 0x2ba01cu;
    // NOP
    ctx->pc = 0x2ba020u;
}
