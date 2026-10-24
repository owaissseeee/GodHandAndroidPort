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

// Function: printfloat
// Address: 0x3b0ef8 - 0x3b10d0
void printfloat_0x3b0ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("printfloat_0x3b0ef8");
#endif

    switch (ctx->pc) {
        case 0x3b0ef8u: goto label_3b0ef8;
        case 0x3b0efcu: goto label_3b0efc;
        case 0x3b0f00u: goto label_3b0f00;
        case 0x3b0f04u: goto label_3b0f04;
        case 0x3b0f08u: goto label_3b0f08;
        case 0x3b0f0cu: goto label_3b0f0c;
        case 0x3b0f10u: goto label_3b0f10;
        case 0x3b0f14u: goto label_3b0f14;
        case 0x3b0f18u: goto label_3b0f18;
        case 0x3b0f1cu: goto label_3b0f1c;
        case 0x3b0f20u: goto label_3b0f20;
        case 0x3b0f24u: goto label_3b0f24;
        case 0x3b0f28u: goto label_3b0f28;
        case 0x3b0f2cu: goto label_3b0f2c;
        case 0x3b0f30u: goto label_3b0f30;
        case 0x3b0f34u: goto label_3b0f34;
        case 0x3b0f38u: goto label_3b0f38;
        case 0x3b0f3cu: goto label_3b0f3c;
        case 0x3b0f40u: goto label_3b0f40;
        case 0x3b0f44u: goto label_3b0f44;
        case 0x3b0f48u: goto label_3b0f48;
        case 0x3b0f4cu: goto label_3b0f4c;
        case 0x3b0f50u: goto label_3b0f50;
        case 0x3b0f54u: goto label_3b0f54;
        case 0x3b0f58u: goto label_3b0f58;
        case 0x3b0f5cu: goto label_3b0f5c;
        case 0x3b0f60u: goto label_3b0f60;
        case 0x3b0f64u: goto label_3b0f64;
        case 0x3b0f68u: goto label_3b0f68;
        case 0x3b0f6cu: goto label_3b0f6c;
        case 0x3b0f70u: goto label_3b0f70;
        case 0x3b0f74u: goto label_3b0f74;
        case 0x3b0f78u: goto label_3b0f78;
        case 0x3b0f7cu: goto label_3b0f7c;
        case 0x3b0f80u: goto label_3b0f80;
        case 0x3b0f84u: goto label_3b0f84;
        case 0x3b0f88u: goto label_3b0f88;
        case 0x3b0f8cu: goto label_3b0f8c;
        case 0x3b0f90u: goto label_3b0f90;
        case 0x3b0f94u: goto label_3b0f94;
        case 0x3b0f98u: goto label_3b0f98;
        case 0x3b0f9cu: goto label_3b0f9c;
        case 0x3b0fa0u: goto label_3b0fa0;
        case 0x3b0fa4u: goto label_3b0fa4;
        case 0x3b0fa8u: goto label_3b0fa8;
        case 0x3b0facu: goto label_3b0fac;
        case 0x3b0fb0u: goto label_3b0fb0;
        case 0x3b0fb4u: goto label_3b0fb4;
        case 0x3b0fb8u: goto label_3b0fb8;
        case 0x3b0fbcu: goto label_3b0fbc;
        case 0x3b0fc0u: goto label_3b0fc0;
        case 0x3b0fc4u: goto label_3b0fc4;
        case 0x3b0fc8u: goto label_3b0fc8;
        case 0x3b0fccu: goto label_3b0fcc;
        case 0x3b0fd0u: goto label_3b0fd0;
        case 0x3b0fd4u: goto label_3b0fd4;
        case 0x3b0fd8u: goto label_3b0fd8;
        case 0x3b0fdcu: goto label_3b0fdc;
        case 0x3b0fe0u: goto label_3b0fe0;
        case 0x3b0fe4u: goto label_3b0fe4;
        case 0x3b0fe8u: goto label_3b0fe8;
        case 0x3b0fecu: goto label_3b0fec;
        case 0x3b0ff0u: goto label_3b0ff0;
        case 0x3b0ff4u: goto label_3b0ff4;
        case 0x3b0ff8u: goto label_3b0ff8;
        case 0x3b0ffcu: goto label_3b0ffc;
        case 0x3b1000u: goto label_3b1000;
        case 0x3b1004u: goto label_3b1004;
        case 0x3b1008u: goto label_3b1008;
        case 0x3b100cu: goto label_3b100c;
        case 0x3b1010u: goto label_3b1010;
        case 0x3b1014u: goto label_3b1014;
        case 0x3b1018u: goto label_3b1018;
        case 0x3b101cu: goto label_3b101c;
        case 0x3b1020u: goto label_3b1020;
        case 0x3b1024u: goto label_3b1024;
        case 0x3b1028u: goto label_3b1028;
        case 0x3b102cu: goto label_3b102c;
        case 0x3b1030u: goto label_3b1030;
        case 0x3b1034u: goto label_3b1034;
        case 0x3b1038u: goto label_3b1038;
        case 0x3b103cu: goto label_3b103c;
        case 0x3b1040u: goto label_3b1040;
        case 0x3b1044u: goto label_3b1044;
        case 0x3b1048u: goto label_3b1048;
        case 0x3b104cu: goto label_3b104c;
        case 0x3b1050u: goto label_3b1050;
        case 0x3b1054u: goto label_3b1054;
        case 0x3b1058u: goto label_3b1058;
        case 0x3b105cu: goto label_3b105c;
        case 0x3b1060u: goto label_3b1060;
        case 0x3b1064u: goto label_3b1064;
        case 0x3b1068u: goto label_3b1068;
        case 0x3b106cu: goto label_3b106c;
        case 0x3b1070u: goto label_3b1070;
        case 0x3b1074u: goto label_3b1074;
        case 0x3b1078u: goto label_3b1078;
        case 0x3b107cu: goto label_3b107c;
        case 0x3b1080u: goto label_3b1080;
        case 0x3b1084u: goto label_3b1084;
        case 0x3b1088u: goto label_3b1088;
        case 0x3b108cu: goto label_3b108c;
        case 0x3b1090u: goto label_3b1090;
        case 0x3b1094u: goto label_3b1094;
        case 0x3b1098u: goto label_3b1098;
        case 0x3b109cu: goto label_3b109c;
        case 0x3b10a0u: goto label_3b10a0;
        case 0x3b10a4u: goto label_3b10a4;
        case 0x3b10a8u: goto label_3b10a8;
        case 0x3b10acu: goto label_3b10ac;
        case 0x3b10b0u: goto label_3b10b0;
        case 0x3b10b4u: goto label_3b10b4;
        case 0x3b10b8u: goto label_3b10b8;
        case 0x3b10bcu: goto label_3b10bc;
        case 0x3b10c0u: goto label_3b10c0;
        case 0x3b10c4u: goto label_3b10c4;
        case 0x3b10c8u: goto label_3b10c8;
        case 0x3b10ccu: goto label_3b10cc;
        default: break;
    }

    ctx->pc = 0x3b0ef8u;

label_3b0ef8:
    // 0x3b0ef8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b0ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3b0efc:
    // 0x3b0efc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3b0efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_3b0f00:
    // 0x3b0f00: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3b0f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_3b0f04:
    // 0x3b0f04: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3b0f04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f08:
    // 0x3b0f08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b0f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3b0f0c:
    // 0x3b0f0c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b0f0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f10:
    // 0x3b0f10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b0f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3b0f14:
    // 0x3b0f14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3b0f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f18:
    // 0x3b0f18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b0f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3b0f1c:
    // 0x3b0f1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b0f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f20:
    // 0x3b0f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b0f24:
    // 0x3b0f24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b0f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f28:
    // 0x3b0f28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b0f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3b0f2c:
    // 0x3b0f2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b0f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3b0f30:
    // 0x3b0f30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b0f34:
    // 0x3b0f34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b0f38:
    if (ctx->pc == 0x3B0F38u) {
        ctx->pc = 0x3B0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F34u;
        // 0x3b0f38: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F3Cu;
        goto label_3b0f3c;
    }
    ctx->pc = 0x3B0F34u;
    {
        const bool branch_taken_0x3b0f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F34u;
        // 0x3b0f38: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f34) {
            ctx->pc = 0x3B0F44u;
            goto label_3b0f44;
        }
    }
    ctx->pc = 0x3B0F3Cu;
label_3b0f3c:
    // 0x3b0f3c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3b0f40:
    if (ctx->pc == 0x3B0F40u) {
        ctx->pc = 0x3B0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F3Cu;
        // 0x3b0f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F44u;
        goto label_3b0f44;
    }
    ctx->pc = 0x3B0F3Cu;
    {
        const bool branch_taken_0x3b0f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F3Cu;
        // 0x3b0f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f3c) {
            ctx->pc = 0x3B10A8u;
            goto label_3b10a8;
        }
    }
    ctx->pc = 0x3B0F44u;
label_3b0f44:
    // 0x3b0f44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3b0f44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f48:
    // 0x3b0f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f4c:
    // 0x3b0f4c: 0xc0c7a1c  jal         func_31E870
label_3b0f50:
    if (ctx->pc == 0x3B0F50u) {
        ctx->pc = 0x3B0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F4Cu;
        // 0x3b0f50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F54u;
        goto label_3b0f54;
    }
    ctx->pc = 0x3B0F4Cu;
    SET_GPR_U32(ctx, 31, 0x3B0F54u);
    ctx->pc = 0x3B0F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0F4Cu;
    // 0x3b0f50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3B0F4Cu, 0x3B0F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F54u;
label_3b0f54:
    // 0x3b0f54: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_3b0f58:
    if (ctx->pc == 0x3B0F58u) {
        ctx->pc = 0x3B0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F54u;
        // 0x3b0f58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F5Cu;
        goto label_3b0f5c;
    }
    ctx->pc = 0x3B0F54u;
    {
        const bool branch_taken_0x3b0f54 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F54u;
        // 0x3b0f58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f54) {
            ctx->pc = 0x3B0F88u;
            goto label_3b0f88;
        }
    }
    ctx->pc = 0x3B0F5Cu;
label_3b0f5c:
    // 0x3b0f5c: 0xc0c78b8  jal         func_31E2E0
label_3b0f60:
    if (ctx->pc == 0x3B0F60u) {
        ctx->pc = 0x3B0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F5Cu;
        // 0x3b0f60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F64u;
        goto label_3b0f64;
    }
    ctx->pc = 0x3B0F5Cu;
    SET_GPR_U32(ctx, 31, 0x3B0F64u);
    ctx->pc = 0x3B0F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0F5Cu;
    // 0x3b0f60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3B0F5Cu, 0x3B0F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F64u;
label_3b0f64:
    // 0x3b0f64: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3b0f64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b0f68:
    // 0x3b0f68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b0f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f6c:
    // 0x3b0f6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b0f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f70:
    // 0x3b0f70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b0f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f74:
    // 0x3b0f74: 0x2a0f809  jalr        $s5
label_3b0f78:
    if (ctx->pc == 0x3B0F78u) {
        ctx->pc = 0x3B0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F74u;
        // 0x3b0f78: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F7Cu;
        goto label_3b0f7c;
    }
    ctx->pc = 0x3B0F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x3B0F7Cu);
        ctx->pc = 0x3B0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F74u;
        // 0x3b0f78: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0F74u, 0x3B0F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0F7Cu;
label_3b0f7c:
    // 0x3b0f7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b0f80:
    // 0x3b0f80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3b0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3b0f84:
    // 0x3b0f84: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b0f88:
    // 0x3b0f88: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x3b0f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_3b0f8c:
    // 0x3b0f8c: 0xdc25fe78  ld          $a1, -0x188($at)
    ctx->pc = 0x3b0f8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294966904)));
label_3b0f90:
    // 0x3b0f90: 0xc0c7a1c  jal         func_31E870
label_3b0f94:
    if (ctx->pc == 0x3B0F94u) {
        ctx->pc = 0x3B0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F90u;
        // 0x3b0f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F98u;
        goto label_3b0f98;
    }
    ctx->pc = 0x3B0F90u;
    SET_GPR_U32(ctx, 31, 0x3B0F98u);
    ctx->pc = 0x3B0F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0F90u;
    // 0x3b0f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3B0F90u, 0x3B0F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F98u;
label_3b0f98:
    // 0x3b0f98: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_3b0f9c:
    if (ctx->pc == 0x3B0F9Cu) {
        ctx->pc = 0x3B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F98u;
        // 0x3b0f9c: 0x3c130046  lui         $s3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FA0u;
        goto label_3b0fa0;
    }
    ctx->pc = 0x3B0F98u;
    {
        const bool branch_taken_0x3b0f98 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F98u;
        // 0x3b0f9c: 0x3c130046  lui         $s3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f98) {
            ctx->pc = 0x3B0FDCu;
            goto label_3b0fdc;
        }
    }
    ctx->pc = 0x3B0FA0u;
label_3b0fa0:
    // 0x3b0fa0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b0fa4:
    if (ctx->pc == 0x3B0FA4u) {
        ctx->pc = 0x3B0FA8u;
        goto label_3b0fa8;
    }
    ctx->pc = 0x3B0FA0u;
    {
        const bool branch_taken_0x3b0fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0fa0) {
            ctx->pc = 0x3B0FBCu;
            goto label_3b0fbc;
        }
    }
    ctx->pc = 0x3B0FA8u;
label_3b0fa8:
    // 0x3b0fa8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x3b0fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_3b0fac:
    // 0x3b0fac: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3b0facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_3b0fb0:
    // 0x3b0fb0: 0xc0c78d2  jal         func_31E348
label_3b0fb4:
    if (ctx->pc == 0x3B0FB4u) {
        ctx->pc = 0x3B0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FB0u;
        // 0x3b0fb4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FB8u;
        goto label_3b0fb8;
    }
    ctx->pc = 0x3B0FB0u;
    SET_GPR_U32(ctx, 31, 0x3B0FB8u);
    ctx->pc = 0x3B0FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0FB0u;
    // 0x3b0fb4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3B0FB0u, 0x3B0FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0FB8u;
label_3b0fb8:
    // 0x3b0fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b0fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0fbc:
    // 0x3b0fbc: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x3b0fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_3b0fc0:
    // 0x3b0fc0: 0xdc25fe80  ld          $a1, -0x180($at)
    ctx->pc = 0x3b0fc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294966912)));
label_3b0fc4:
    // 0x3b0fc4: 0xc0c7a1c  jal         func_31E870
label_3b0fc8:
    if (ctx->pc == 0x3B0FC8u) {
        ctx->pc = 0x3B0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FC4u;
        // 0x3b0fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FCCu;
        goto label_3b0fcc;
    }
    ctx->pc = 0x3B0FC4u;
    SET_GPR_U32(ctx, 31, 0x3B0FCCu);
    ctx->pc = 0x3B0FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0FC4u;
    // 0x3b0fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3B0FC4u, 0x3B0FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0FCCu;
label_3b0fcc:
    // 0x3b0fcc: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_3b0fd0:
    if (ctx->pc == 0x3B0FD0u) {
        ctx->pc = 0x3B0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FCCu;
        // 0x3b0fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FD4u;
        goto label_3b0fd4;
    }
    ctx->pc = 0x3B0FCCu;
    {
        const bool branch_taken_0x3b0fcc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FCCu;
        // 0x3b0fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0fcc) {
            ctx->pc = 0x3B0FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0fa8;
        }
    }
    ctx->pc = 0x3B0FD4u;
label_3b0fd4:
    // 0x3b0fd4: 0x10000015  b           . + 4 + (0x15 << 2)
label_3b0fd8:
    if (ctx->pc == 0x3B0FD8u) {
        ctx->pc = 0x3B0FDCu;
        goto label_3b0fdc;
    }
    ctx->pc = 0x3B0FD4u;
    {
        const bool branch_taken_0x3b0fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0fd4) {
            ctx->pc = 0x3B102Cu;
            goto label_3b102c;
        }
    }
    ctx->pc = 0x3B0FDCu;
label_3b0fdc:
    // 0x3b0fdc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3b0fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_3b0fe0:
    // 0x3b0fe0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3b0fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_3b0fe4:
    // 0x3b0fe4: 0xc0c7a1c  jal         func_31E870
label_3b0fe8:
    if (ctx->pc == 0x3B0FE8u) {
        ctx->pc = 0x3B0FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FE4u;
        // 0x3b0fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FECu;
        goto label_3b0fec;
    }
    ctx->pc = 0x3B0FE4u;
    SET_GPR_U32(ctx, 31, 0x3B0FECu);
    ctx->pc = 0x3B0FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0FE4u;
    // 0x3b0fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3B0FE4u, 0x3B0FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0FECu;
label_3b0fec:
    // 0x3b0fec: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_3b0ff0:
    if (ctx->pc == 0x3B0FF0u) {
        ctx->pc = 0x3B0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FECu;
        // 0x3b0ff0: 0x3c130046  lui         $s3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FF4u;
        goto label_3b0ff4;
    }
    ctx->pc = 0x3B0FECu;
    {
        const bool branch_taken_0x3b0fec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FECu;
        // 0x3b0ff0: 0x3c130046  lui         $s3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0fec) {
            ctx->pc = 0x3B102Cu;
            goto label_3b102c;
        }
    }
    ctx->pc = 0x3B0FF4u;
label_3b0ff4:
    // 0x3b0ff4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b0ff8:
    if (ctx->pc == 0x3B0FF8u) {
        ctx->pc = 0x3B0FFCu;
        goto label_3b0ffc;
    }
    ctx->pc = 0x3B0FF4u;
    {
        const bool branch_taken_0x3b0ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0ff4) {
            ctx->pc = 0x3B1014u;
            goto label_3b1014;
        }
    }
    ctx->pc = 0x3B0FFCu;
label_3b0ffc:
    // 0x3b0ffc: 0x0  nop
    ctx->pc = 0x3b0ffcu;
    // NOP
label_3b1000:
    // 0x3b1000: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x3b1000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_3b1004:
    // 0x3b1004: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3b1004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_3b1008:
    // 0x3b1008: 0xc0c797c  jal         func_31E5F0
label_3b100c:
    if (ctx->pc == 0x3B100Cu) {
        ctx->pc = 0x3B100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1008u;
        // 0x3b100c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1010u;
        goto label_3b1010;
    }
    ctx->pc = 0x3B1008u;
    SET_GPR_U32(ctx, 31, 0x3B1010u);
    ctx->pc = 0x3B100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1008u;
    // 0x3b100c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x3B1008u, 0x3B1010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1010u;
label_3b1010:
    // 0x3b1010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b1010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1014:
    // 0x3b1014: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3b1014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_3b1018:
    // 0x3b1018: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3b1018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_3b101c:
    // 0x3b101c: 0xc0c7a1c  jal         func_31E870
label_3b1020:
    if (ctx->pc == 0x3B1020u) {
        ctx->pc = 0x3B1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B101Cu;
        // 0x3b1020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1024u;
        goto label_3b1024;
    }
    ctx->pc = 0x3B101Cu;
    SET_GPR_U32(ctx, 31, 0x3B1024u);
    ctx->pc = 0x3B1020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B101Cu;
    // 0x3b1020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3B101Cu, 0x3B1024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1024u;
label_3b1024:
    // 0x3b1024: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_3b1028:
    if (ctx->pc == 0x3B1028u) {
        ctx->pc = 0x3B1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1024u;
        // 0x3b1028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B102Cu;
        goto label_3b102c;
    }
    ctx->pc = 0x3B1024u;
    {
        const bool branch_taken_0x3b1024 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1024u;
        // 0x3b1028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1024) {
            ctx->pc = 0x3B1000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1000;
        }
    }
    ctx->pc = 0x3B102Cu;
label_3b102c:
    // 0x3b102c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x3b102cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_3b1030:
    // 0x3b1030: 0xdc25fe88  ld          $a1, -0x178($at)
    ctx->pc = 0x3b1030u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294966920)));
label_3b1034:
    // 0x3b1034: 0xc0c78d2  jal         func_31E348
label_3b1038:
    if (ctx->pc == 0x3B1038u) {
        ctx->pc = 0x3B1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1034u;
        // 0x3b1038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B103Cu;
        goto label_3b103c;
    }
    ctx->pc = 0x3B1034u;
    SET_GPR_U32(ctx, 31, 0x3B103Cu);
    ctx->pc = 0x3B1038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1034u;
    // 0x3b1038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3B1034u, 0x3B103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B103Cu;
label_3b103c:
    // 0x3b103c: 0xc0ee1cc  jal         func_3B8730
label_3b1040:
    if (ctx->pc == 0x3B1040u) {
        ctx->pc = 0x3B1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B103Cu;
        // 0x3b1040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1044u;
        goto label_3b1044;
    }
    ctx->pc = 0x3B103Cu;
    SET_GPR_U32(ctx, 31, 0x3B1044u);
    ctx->pc = 0x3B1040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B103Cu;
    // 0x3b1040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8730u, 0x3B103Cu, 0x3B1044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1044u;
label_3b1044:
    // 0x3b1044: 0xc0ec39a  jal         func_3B0E68
label_3b1048:
    if (ctx->pc == 0x3B1048u) {
        ctx->pc = 0x3B1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1044u;
        // 0x3b1048: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B104Cu;
        goto label_3b104c;
    }
    ctx->pc = 0x3B1044u;
    SET_GPR_U32(ctx, 31, 0x3B104Cu);
    ctx->pc = 0x3B1048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1044u;
    // 0x3b1048: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0E68u, 0x3B1044u, 0x3B104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B104Cu;
label_3b104c:
    // 0x3b104c: 0x2667fe60  addiu       $a3, $s3, -0x1A0
    ctx->pc = 0x3b104cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966880));
label_3b1050:
    // 0x3b1050: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3b1050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1054:
    // 0x3b1054: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b1054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b1058:
    // 0x3b1058: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b1058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b105c:
    // 0x3b105c: 0xc0ec7a4  jal         func_3B1E90
label_3b1060:
    if (ctx->pc == 0x3B1060u) {
        ctx->pc = 0x3B1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B105Cu;
        // 0x3b1060: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1064u;
        goto label_3b1064;
    }
    ctx->pc = 0x3B105Cu;
    SET_GPR_U32(ctx, 31, 0x3B1064u);
    ctx->pc = 0x3B1060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B105Cu;
    // 0x3b1060: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1E90u, 0x3B105Cu, 0x3B1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1064u;
label_3b1064:
    // 0x3b1064: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_3b1068:
    if (ctx->pc == 0x3B1068u) {
        ctx->pc = 0x3B1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1064u;
        // 0x3b1068: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B106Cu;
        goto label_3b106c;
    }
    ctx->pc = 0x3B1064u;
    {
        const bool branch_taken_0x3b1064 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x3B1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1064u;
        // 0x3b1068: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1064) {
            ctx->pc = 0x3B1084u;
            goto label_3b1084;
        }
    }
    ctx->pc = 0x3B106Cu;
label_3b106c:
    // 0x3b106c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3b106cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_3b1070:
    // 0x3b1070: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b1070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b1074:
    // 0x3b1074: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b1074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b1078:
    // 0x3b1078: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b1078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b107c:
    // 0x3b107c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b1080:
    if (ctx->pc == 0x3B1080u) {
        ctx->pc = 0x3B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B107Cu;
        // 0x3b1080: 0x24e7fe68  addiu       $a3, $a3, -0x198 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1084u;
        goto label_3b1084;
    }
    ctx->pc = 0x3B107Cu;
    {
        const bool branch_taken_0x3b107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B107Cu;
        // 0x3b1080: 0x24e7fe68  addiu       $a3, $a3, -0x198 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b107c) {
            ctx->pc = 0x3B1098u;
            goto label_3b1098;
        }
    }
    ctx->pc = 0x3B1084u;
label_3b1084:
    // 0x3b1084: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3b1084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_3b1088:
    // 0x3b1088: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b1088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b108c:
    // 0x3b108c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b108cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b1090:
    // 0x3b1090: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b1090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1094:
    // 0x3b1094: 0x24e7fe70  addiu       $a3, $a3, -0x190
    ctx->pc = 0x3b1094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966896));
label_3b1098:
    // 0x3b1098: 0xc0ec7a4  jal         func_3B1E90
label_3b109c:
    if (ctx->pc == 0x3B109Cu) {
        ctx->pc = 0x3B109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1098u;
        // 0x3b109c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10A0u;
        goto label_3b10a0;
    }
    ctx->pc = 0x3B1098u;
    SET_GPR_U32(ctx, 31, 0x3B10A0u);
    ctx->pc = 0x3B109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1098u;
    // 0x3b109c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1E90u, 0x3B1098u, 0x3B10A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B10A0u;
label_3b10a0:
    // 0x3b10a0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x3b10a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3b10a4:
    // 0x3b10a4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3b10a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b10a8:
    // 0x3b10a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b10a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3b10ac:
    // 0x3b10ac: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3b10acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3b10b0:
    // 0x3b10b0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3b10b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b10b4:
    // 0x3b10b4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b10b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b10b8:
    // 0x3b10b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b10b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b10bc:
    // 0x3b10bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b10bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b10c0:
    // 0x3b10c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b10c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b10c4:
    // 0x3b10c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b10c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b10c8:
    // 0x3b10c8: 0x3e00008  jr          $ra
label_3b10cc:
    if (ctx->pc == 0x3B10CCu) {
        ctx->pc = 0x3B10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10C8u;
        // 0x3b10cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10D0u;
        goto label_fallthrough_0x3b10c8;
    }
    ctx->pc = 0x3B10C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10C8u;
        // 0x3b10cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B10C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b10c8:
    ctx->pc = 0x3B10D0u;
}
