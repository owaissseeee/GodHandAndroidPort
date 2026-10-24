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

// Function: Slot2_PayoutTicket
// Address: 0x1e5f30 - 0x1e6270
void Slot2_PayoutTicket_0x1e5f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_PayoutTicket_0x1e5f30");
#endif

    switch (ctx->pc) {
        case 0x1e5f9cu: goto label_1e5f9c;
        case 0x1e5facu: goto label_1e5fac;
        case 0x1e5fbcu: goto label_1e5fbc;
        case 0x1e5fd4u: goto label_1e5fd4;
        case 0x1e605cu: goto label_1e605c;
        case 0x1e607cu: goto label_1e607c;
        case 0x1e6098u: goto label_1e6098;
        case 0x1e60a0u: goto label_1e60a0;
        case 0x1e60c4u: goto label_1e60c4;
        case 0x1e60d4u: goto label_1e60d4;
        case 0x1e6144u: goto label_1e6144;
        case 0x1e61a8u: goto label_1e61a8;
        case 0x1e6218u: goto label_1e6218;
        case 0x1e623cu: goto label_1e623c;
        default: break;
    }

    ctx->pc = 0x1e5f30u;

    // 0x1e5f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5f34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5f38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e5f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e5f3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5f44: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e5f48: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1e5f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1e5f4c: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1E5F4Cu;
    {
        const bool branch_taken_0x1e5f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F4Cu;
        // 0x1e5f50: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f4c) {
            ctx->pc = 0x1E6258u;
            goto label_1e6258;
        }
    }
    ctx->pc = 0x1E5F54u;
    // 0x1e5f54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e5f58: 0x2442ba50  addiu       $v0, $v0, -0x45B0
    ctx->pc = 0x1e5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949456));
    // 0x1e5f5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e5f60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e5f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5f64: 0x800008  jr          $a0
    ctx->pc = 0x1E5F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5F6Cu: goto label_1e5f6c;
            case 0x1E5F7Cu: goto label_1e5f7c;
            case 0x1E5FDCu: goto label_1e5fdc;
            case 0x1E60DCu: goto label_1e60dc;
            case 0x1E6138u: goto label_1e6138;
            case 0x1E61D0u: goto label_1e61d0;
            case 0x1E624Cu: goto label_1e624c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5F64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E5F6Cu;
label_1e5f6c:
    // 0x1e5f6c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e5f70: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1e5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1e5f74: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1E5F74u;
    {
        const bool branch_taken_0x1e5f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F74u;
        // 0x1e5f78: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f74) {
            ctx->pc = 0x1E6240u;
            goto label_1e6240;
        }
    }
    ctx->pc = 0x1E5F7Cu;
label_1e5f7c:
    // 0x1e5f7c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1e5f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1e5f80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e5f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f84: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e5f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5f88: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1e5f88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1e5f8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e5f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5f90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e5f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5f94: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1E5F94u;
    SET_GPR_U32(ctx, 31, 0x1E5F9Cu);
    ctx->pc = 0x1E5F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F94u;
    // 0x1e5f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1E5F94u, 0x1E5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F9Cu;
label_1e5f9c:
    // 0x1e5f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5fa4: 0xc079bb6  jal         func_1E6ED8
    ctx->pc = 0x1E5FA4u;
    SET_GPR_U32(ctx, 31, 0x1E5FACu);
    ctx->pc = 0x1E5FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FA4u;
    // 0x1e5fa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6ED8u, 0x1E5FA4u, 0x1E5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FACu;
label_1e5fac:
    // 0x1e5fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5fb4: 0xc079b52  jal         func_1E6D48
    ctx->pc = 0x1E5FB4u;
    SET_GPR_U32(ctx, 31, 0x1E5FBCu);
    ctx->pc = 0x1E5FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FB4u;
    // 0x1e5fb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6D48u, 0x1E5FB4u, 0x1E5FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FBCu;
label_1e5fbc:
    // 0x1e5fbc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e5fc0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1e5fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1e5fc4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e5fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e5fc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fcc: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1E5FCCu;
    SET_GPR_U32(ctx, 31, 0x1E5FD4u);
    ctx->pc = 0x1E5FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FCCu;
    // 0x1e5fd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1E5FCCu, 0x1E5FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FD4u;
label_1e5fd4:
    // 0x1e5fd4: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1E5FD4u;
    {
        const bool branch_taken_0x1e5fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FD4u;
        // 0x1e5fd8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fd4) {
            ctx->pc = 0x1E6240u;
            goto label_1e6240;
        }
    }
    ctx->pc = 0x1E5FDCu;
label_1e5fdc:
    // 0x1e5fdc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e5fe0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5FE0u;
    {
        const bool branch_taken_0x1e5fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FE0u;
        // 0x1e5fe4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fe0) {
            ctx->pc = 0x1E5FF4u;
            goto label_1e5ff4;
        }
    }
    ctx->pc = 0x1E5FE8u;
    // 0x1e5fe8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e5fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5FECu;
    {
        const bool branch_taken_0x1e5fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FECu;
        // 0x1e5ff0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fec) {
            ctx->pc = 0x1E5FF8u;
            goto label_1e5ff8;
        }
    }
    ctx->pc = 0x1E5FF4u;
label_1e5ff4:
    // 0x1e5ff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ff8:
    // 0x1e5ff8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e5ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e5ffc: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x1E5FFCu;
    {
        const bool branch_taken_0x1e5ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FFCu;
        // 0x1e6000: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ffc) {
            ctx->pc = 0x1E6258u;
            goto label_1e6258;
        }
    }
    ctx->pc = 0x1E6004u;
    // 0x1e6004: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1e6004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1e6008: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x1e6008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
    // 0x1e600c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e600cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6010: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1e6010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e6014: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x1e6014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1e6018: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E6018u;
    {
        const bool branch_taken_0x1e6018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6018u;
        // 0x1e601c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6018) {
            ctx->pc = 0x1E6084u;
            goto label_1e6084;
        }
    }
    ctx->pc = 0x1E6020u;
    // 0x1e6020: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1e6020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e6024: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1e6024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1e6028: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1e6028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1e602c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1e602cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1e6030: 0x8c62056c  lw          $v0, 0x56C($v1)
    ctx->pc = 0x1e6030u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x1e6034: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6034u;
    {
        const bool branch_taken_0x1e6034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6034) {
            ctx->pc = 0x1E6038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6034u;
            // 0x1e6038: 0x26240400  addiu       $a0, $s1, 0x400 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6050u;
            goto label_1e6050;
        }
    }
    ctx->pc = 0x1E603Cu;
    // 0x1e603c: 0x946305b0  lhu         $v1, 0x5B0($v1)
    ctx->pc = 0x1e603cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1456)));
    // 0x1e6040: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e6040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e6044: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6044u;
    {
        const bool branch_taken_0x1e6044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6044) {
            ctx->pc = 0x1E6048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6044u;
            // 0x1e6048: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6064u;
            goto label_1e6064;
        }
    }
    ctx->pc = 0x1E604Cu;
    // 0x1e604c: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x1e604cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_1e6050:
    // 0x1e6050: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x1e6050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1e6054: 0xc079e42  jal         func_1E7908
    ctx->pc = 0x1E6054u;
    SET_GPR_U32(ctx, 31, 0x1E605Cu);
    ctx->pc = 0x1E6058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6054u;
    // 0x1e6058: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7908u, 0x1E6054u, 0x1E605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E605Cu;
label_1e605c:
    // 0x1e605c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E605Cu;
    {
        const bool branch_taken_0x1e605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E605Cu;
        // 0x1e6060: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e605c) {
            ctx->pc = 0x1E6080u;
            goto label_1e6080;
        }
    }
    ctx->pc = 0x1E6064u;
label_1e6064:
    // 0x1e6064: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6064u;
    {
        const bool branch_taken_0x1e6064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6064) {
            ctx->pc = 0x1E6068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6064u;
            // 0x1e6068: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6080u;
            goto label_1e6080;
        }
    }
    ctx->pc = 0x1E606Cu;
    // 0x1e606c: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x1e606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e6070: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x1e6070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1e6074: 0xc079e42  jal         func_1E7908
    ctx->pc = 0x1E6074u;
    SET_GPR_U32(ctx, 31, 0x1E607Cu);
    ctx->pc = 0x1E6078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6074u;
    // 0x1e6078: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7908u, 0x1E6074u, 0x1E607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E607Cu;
label_1e607c:
    // 0x1e607c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e6080:
    // 0x1e6080: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e6084:
    // 0x1e6084: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1e6084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1e6088: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1e6088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e608c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6090: 0xc07f0fa  jal         func_1FC3E8
    ctx->pc = 0x1E6090u;
    SET_GPR_U32(ctx, 31, 0x1E6098u);
    ctx->pc = 0x1E6094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6090u;
    // 0x1e6094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3E8u, 0x1E6090u, 0x1E6098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6098u;
label_1e6098:
    // 0x1e6098: 0xc07f0f4  jal         func_1FC3D0
    ctx->pc = 0x1E6098u;
    SET_GPR_U32(ctx, 31, 0x1E60A0u);
    ctx->pc = 0x1E609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6098u;
    // 0x1e609c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x1E6098u, 0x1E60A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60A0u;
label_1e60a0:
    // 0x1e60a0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1e60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1e60a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1e60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e60a8: 0x8c66d6e8  lw          $a2, -0x2918($v1)
    ctx->pc = 0x1e60a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x1e60ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1e60acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1e60b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e60b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e60b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60b8: 0xacc21a10  sw          $v0, 0x1A10($a2)
    ctx->pc = 0x1e60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 2));
    // 0x1e60bc: 0xc079bb6  jal         func_1E6ED8
    ctx->pc = 0x1E60BCu;
    SET_GPR_U32(ctx, 31, 0x1E60C4u);
    ctx->pc = 0x1E60C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60BCu;
    // 0x1e60c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6ED8u, 0x1E60BCu, 0x1E60C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60C4u;
label_1e60c4:
    // 0x1e60c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e60c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e60c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60cc: 0xc079b52  jal         func_1E6D48
    ctx->pc = 0x1E60CCu;
    SET_GPR_U32(ctx, 31, 0x1E60D4u);
    ctx->pc = 0x1E60D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60CCu;
    // 0x1e60d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6D48u, 0x1E60CCu, 0x1E60D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60D4u;
label_1e60d4:
    // 0x1e60d4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1E60D4u;
    {
        const bool branch_taken_0x1e60d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60D4u;
        // 0x1e60d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60d4) {
            ctx->pc = 0x1E625Cu;
            goto label_1e625c;
        }
    }
    ctx->pc = 0x1E60DCu;
label_1e60dc:
    // 0x1e60dc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e60e0: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e60e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e60e4: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e60e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e60e8: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x1e60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1e60ec: 0xdca301a0  ld          $v1, 0x1A0($a1)
    ctx->pc = 0x1e60ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x1e60f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e60f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e60f4: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1E60F4u;
    {
        const bool branch_taken_0x1e60f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60F4u;
        // 0x1e60f8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60f4) {
            ctx->pc = 0x1E6258u;
            goto label_1e6258;
        }
    }
    ctx->pc = 0x1E60FCu;
    // 0x1e60fc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1e6100: 0x8ca3056c  lw          $v1, 0x56C($a1)
    ctx->pc = 0x1e6100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1388)));
    // 0x1e6104: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6104u;
    {
        const bool branch_taken_0x1e6104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6104u;
        // 0x1e6108: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6104) {
            ctx->pc = 0x1E6118u;
            goto label_1e6118;
        }
    }
    ctx->pc = 0x1E610Cu;
    // 0x1e610c: 0x94a305b0  lhu         $v1, 0x5B0($a1)
    ctx->pc = 0x1e610cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x1e6110: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6110u;
    {
        const bool branch_taken_0x1e6110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6110u;
        // 0x1e6114: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6110) {
            ctx->pc = 0x1E6124u;
            goto label_1e6124;
        }
    }
    ctx->pc = 0x1E6118u;
label_1e6118:
    // 0x1e6118: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x1e6118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e611c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1E611Cu;
    {
        const bool branch_taken_0x1e611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E611Cu;
        // 0x1e6120: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e611c) {
            ctx->pc = 0x1E6210u;
            goto label_1e6210;
        }
    }
    ctx->pc = 0x1E6124u;
label_1e6124:
    // 0x1e6124: 0x54620046  bnel        $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E6124u;
    {
        const bool branch_taken_0x1e6124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6124) {
            ctx->pc = 0x1E6128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6124u;
            // 0x1e6128: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6240u;
            goto label_1e6240;
        }
    }
    ctx->pc = 0x1E612Cu;
    // 0x1e612c: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x1e612cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e6130: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1E6130u;
    {
        const bool branch_taken_0x1e6130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6130u;
        // 0x1e6134: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6130) {
            ctx->pc = 0x1E6230u;
            goto label_1e6230;
        }
    }
    ctx->pc = 0x1E6138u;
label_1e6138:
    // 0x1e6138: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1e6138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1e613c: 0xc07f0f4  jal         func_1FC3D0
    ctx->pc = 0x1E613Cu;
    SET_GPR_U32(ctx, 31, 0x1E6144u);
    ctx->pc = 0x1E6140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E613Cu;
    // 0x1e6140: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x1E613Cu, 0x1E6144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6144u;
label_1e6144:
    // 0x1e6144: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1e6144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e6148: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E6148u;
    {
        const bool branch_taken_0x1e6148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6148u;
        // 0x1e614c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6148) {
            ctx->pc = 0x1E61C8u;
            goto label_1e61c8;
        }
    }
    ctx->pc = 0x1E6150u;
    // 0x1e6150: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e6150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e6154: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6154u;
    {
        const bool branch_taken_0x1e6154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6154u;
        // 0x1e6158: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6154) {
            ctx->pc = 0x1E6168u;
            goto label_1e6168;
        }
    }
    ctx->pc = 0x1E615Cu;
    // 0x1e615c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e615cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6160: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6160u;
    {
        const bool branch_taken_0x1e6160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6160u;
        // 0x1e6164: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6160) {
            ctx->pc = 0x1E616Cu;
            goto label_1e616c;
        }
    }
    ctx->pc = 0x1E6168u;
label_1e6168:
    // 0x1e6168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e616c:
    // 0x1e616c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e6170: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1E6170u;
    {
        const bool branch_taken_0x1e6170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6170u;
        // 0x1e6174: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6170) {
            ctx->pc = 0x1E6258u;
            goto label_1e6258;
        }
    }
    ctx->pc = 0x1E6178u;
    // 0x1e6178: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1e617c: 0x8c43056c  lw          $v1, 0x56C($v0)
    ctx->pc = 0x1e617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1388)));
    // 0x1e6180: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6180u;
    {
        const bool branch_taken_0x1e6180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6180u;
        // 0x1e6184: 0x26240400  addiu       $a0, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6180) {
            ctx->pc = 0x1E619Cu;
            goto label_1e619c;
        }
    }
    ctx->pc = 0x1E6188u;
    // 0x1e6188: 0x944305b0  lhu         $v1, 0x5B0($v0)
    ctx->pc = 0x1e6188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x1e618c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e6190: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6190u;
    {
        const bool branch_taken_0x1e6190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6190u;
        // 0x1e6194: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6190) {
            ctx->pc = 0x1E61B0u;
            goto label_1e61b0;
        }
    }
    ctx->pc = 0x1E6198u;
    // 0x1e6198: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x1e6198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_1e619c:
    // 0x1e619c: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x1e619cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x1e61a0: 0xc079e42  jal         func_1E7908
    ctx->pc = 0x1E61A0u;
    SET_GPR_U32(ctx, 31, 0x1E61A8u);
    ctx->pc = 0x1E61A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E61A0u;
    // 0x1e61a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7908u, 0x1E61A0u, 0x1E61A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E61A8u;
label_1e61a8:
    // 0x1e61a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E61A8u;
    {
        const bool branch_taken_0x1e61a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61A8u;
        // 0x1e61ac: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61a8) {
            ctx->pc = 0x1E6240u;
            goto label_1e6240;
        }
    }
    ctx->pc = 0x1E61B0u;
label_1e61b0:
    // 0x1e61b0: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E61B0u;
    {
        const bool branch_taken_0x1e61b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e61b0) {
            ctx->pc = 0x1E61B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E61B0u;
            // 0x1e61b4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6240u;
            goto label_1e6240;
        }
    }
    ctx->pc = 0x1E61B8u;
    // 0x1e61b8: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x1e61b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e61bc: 0x24051003  addiu       $a1, $zero, 0x1003
    ctx->pc = 0x1e61bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x1e61c0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E61C0u;
    {
        const bool branch_taken_0x1e61c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61C0u;
        // 0x1e61c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61c0) {
            ctx->pc = 0x1E6234u;
            goto label_1e6234;
        }
    }
    ctx->pc = 0x1E61C8u;
label_1e61c8:
    // 0x1e61c8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E61C8u;
    {
        const bool branch_taken_0x1e61c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61C8u;
        // 0x1e61cc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61c8) {
            ctx->pc = 0x1E6258u;
            goto label_1e6258;
        }
    }
    ctx->pc = 0x1E61D0u;
label_1e61d0:
    // 0x1e61d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e61d4: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e61d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e61d8: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e61d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e61dc: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x1e61dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1e61e0: 0xdca301a0  ld          $v1, 0x1A0($a1)
    ctx->pc = 0x1e61e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x1e61e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e61e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e61e8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E61E8u;
    {
        const bool branch_taken_0x1e61e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61E8u;
        // 0x1e61ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61e8) {
            ctx->pc = 0x1E625Cu;
            goto label_1e625c;
        }
    }
    ctx->pc = 0x1E61F0u;
    // 0x1e61f0: 0x8ca2056c  lw          $v0, 0x56C($a1)
    ctx->pc = 0x1e61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1388)));
    // 0x1e61f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E61F4u;
    {
        const bool branch_taken_0x1e61f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61F4u;
        // 0x1e61f8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61f4) {
            ctx->pc = 0x1E6208u;
            goto label_1e6208;
        }
    }
    ctx->pc = 0x1E61FCu;
    // 0x1e61fc: 0x94a305b0  lhu         $v1, 0x5B0($a1)
    ctx->pc = 0x1e61fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x1e6200: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6200u;
    {
        const bool branch_taken_0x1e6200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6200u;
        // 0x1e6204: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6200) {
            ctx->pc = 0x1E6220u;
            goto label_1e6220;
        }
    }
    ctx->pc = 0x1E6208u;
label_1e6208:
    // 0x1e6208: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x1e6208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e620c: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x1e620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
label_1e6210:
    // 0x1e6210: 0xc079e42  jal         func_1E7908
    ctx->pc = 0x1E6210u;
    SET_GPR_U32(ctx, 31, 0x1E6218u);
    ctx->pc = 0x1E6214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6210u;
    // 0x1e6214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7908u, 0x1E6210u, 0x1E6218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6218u;
label_1e6218:
    // 0x1e6218: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6218u;
    {
        const bool branch_taken_0x1e6218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6218u;
        // 0x1e621c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6218) {
            ctx->pc = 0x1E6240u;
            goto label_1e6240;
        }
    }
    ctx->pc = 0x1E6220u;
label_1e6220:
    // 0x1e6220: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6220u;
    {
        const bool branch_taken_0x1e6220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6220) {
            ctx->pc = 0x1E6224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6220u;
            // 0x1e6224: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6240u;
            goto label_1e6240;
        }
    }
    ctx->pc = 0x1E6228u;
    // 0x1e6228: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x1e6228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e622c: 0x24051003  addiu       $a1, $zero, 0x1003
    ctx->pc = 0x1e622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
label_1e6230:
    // 0x1e6230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e6230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6234:
    // 0x1e6234: 0xc079e42  jal         func_1E7908
    ctx->pc = 0x1E6234u;
    SET_GPR_U32(ctx, 31, 0x1E623Cu);
    ctx->pc = 0x1E7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7908u, 0x1E6234u, 0x1E623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E623Cu;
label_1e623c:
    // 0x1e623c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e6240:
    // 0x1e6240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e6244: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6244u;
    {
        const bool branch_taken_0x1e6244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6244u;
        // 0x1e6248: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6244) {
            ctx->pc = 0x1E6258u;
            goto label_1e6258;
        }
    }
    ctx->pc = 0x1E624Cu;
label_1e624c:
    // 0x1e624c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e624cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e6250: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e6250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1e6254: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e6254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e6258:
    // 0x1e6258: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e6258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e625c:
    // 0x1e625c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e625cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6264: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6264u;
        // 0x1e6268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E626Cu;
    // 0x1e626c: 0x0  nop
    ctx->pc = 0x1e626cu;
    // NOP
    ctx->pc = 0x1e6270u;
}
