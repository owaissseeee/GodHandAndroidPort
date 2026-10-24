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

// Function: func_002C0F90
// Address: 0x2c0f90 - 0x2c1270
void func_002C0F90_0x2c0f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C0F90_0x2c0f90");
#endif

    switch (ctx->pc) {
        case 0x2c0fe0u: goto label_2c0fe0;
        case 0x2c0ff8u: goto label_2c0ff8;
        case 0x2c1038u: goto label_2c1038;
        case 0x2c105cu: goto label_2c105c;
        case 0x2c1078u: goto label_2c1078;
        case 0x2c10b0u: goto label_2c10b0;
        case 0x2c10e8u: goto label_2c10e8;
        case 0x2c1110u: goto label_2c1110;
        case 0x2c1150u: goto label_2c1150;
        case 0x2c1188u: goto label_2c1188;
        case 0x2c11a4u: goto label_2c11a4;
        case 0x2c11e0u: goto label_2c11e0;
        case 0x2c1218u: goto label_2c1218;
        case 0x2c1228u: goto label_2c1228;
        case 0x2c1230u: goto label_2c1230;
        default: break;
    }

    ctx->pc = 0x2c0f90u;

    // 0x2c0f90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c0f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c0f94: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2c0f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c0f98: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2c0f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2c0f9c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2c0f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2c0fa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c0fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0fa4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c0fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c0fa8: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2c0fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2c0fac: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2c0facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2c0fb0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2c0fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2c0fb4: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2c0fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x2c0fb8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2c0fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2c0fbc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2c0fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0fc0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2c0fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2c0fc4: 0x3c140045  lui         $s4, 0x45
    ctx->pc = 0x2c0fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)69 << 16));
    // 0x2c0fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0fcc: 0x3c150045  lui         $s5, 0x45
    ctx->pc = 0x2c0fccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)69 << 16));
    // 0x2c0fd0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2c0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2c0fd4: 0x3c160045  lui         $s6, 0x45
    ctx->pc = 0x2c0fd4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)69 << 16));
    // 0x2c0fd8: 0xc0b0c00  jal         func_2C3000
    ctx->pc = 0x2C0FD8u;
    SET_GPR_U32(ctx, 31, 0x2C0FE0u);
    ctx->pc = 0x2C0FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0FD8u;
    // 0x2c0fdc: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3000u, 0x2C0FD8u, 0x2C0FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0FE0u;
label_2c0fe0:
    // 0x2c0fe0: 0x261074a0  addiu       $s0, $s0, 0x74A0
    ctx->pc = 0x2c0fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    // 0x2c0fe4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2c0fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2c0fe8: 0x8e0405ac  lw          $a0, 0x5AC($s0)
    ctx->pc = 0x2c0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1452)));
    // 0x2c0fec: 0x24a5c210  addiu       $a1, $a1, -0x3DF0
    ctx->pc = 0x2c0fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951440));
    // 0x2c0ff0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2C0FF0u;
    SET_GPR_U32(ctx, 31, 0x2C0FF8u);
    ctx->pc = 0x2C0FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0FF0u;
    // 0x2c0ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2C0FF0u, 0x2C0FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0FF8u;
label_2c0ff8:
    // 0x2c0ff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ffc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C0FFCu;
    {
        const bool branch_taken_0x2c0ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FFCu;
        // 0x2c1000: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ffc) {
            ctx->pc = 0x2C1064u;
            goto label_2c1064;
        }
    }
    ctx->pc = 0x2C1004u;
    // 0x2c1004: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x2c1004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c1008: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2c1008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c100c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C100Cu;
    {
        const bool branch_taken_0x2c100c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C100Cu;
        // 0x2c1010: 0x266274a0  addiu       $v0, $s3, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c100c) {
            ctx->pc = 0x2C1068u;
            goto label_2c1068;
        }
    }
    ctx->pc = 0x2C1014u;
    // 0x2c1014: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2c1014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2c1018: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2c1018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2c101c: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x2c101cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2c1020: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2c1020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c1024: 0x600000f  bltz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C1024u;
    {
        const bool branch_taken_0x2c1024 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2C1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1024u;
        // 0x2c1028: 0x2402009c  addiu       $v0, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1024) {
            ctx->pc = 0x2C1064u;
            goto label_2c1064;
        }
    }
    ctx->pc = 0x2C102Cu;
    // 0x2c102c: 0x2029018  mult        $s2, $s0, $v0
    ctx->pc = 0x2c102cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2c1030: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2c1030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c1034: 0x0  nop
    ctx->pc = 0x2c1034u;
    // NOP
label_2c1038:
    // 0x2c1038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c103c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c103cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c1040: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2c1040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2c1044: 0x90c50039  lbu         $a1, 0x39($a2)
    ctx->pc = 0x2c1044u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 57)));
    // 0x2c1048: 0x2652ff64  addiu       $s2, $s2, -0x9C
    ctx->pc = 0x2c1048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967140));
    // 0x2c104c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2c104cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c1050: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c1050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c1054: 0xc0b0c10  jal         func_2C3040
    ctx->pc = 0x2C1054u;
    SET_GPR_U32(ctx, 31, 0x2C105Cu);
    ctx->pc = 0x2C1058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1054u;
    // 0x2c1058: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3040u, 0x2C1054u, 0x2C105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C105Cu;
label_2c105c:
    // 0x2c105c: 0x603fff6  bgezl       $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C105Cu;
    {
        const bool branch_taken_0x2c105c = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2c105c) {
            ctx->pc = 0x2C1060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C105Cu;
            // 0x2c1060: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1038;
        }
    }
    ctx->pc = 0x2C1064u;
label_2c1064:
    // 0x2c1064: 0x266274a0  addiu       $v0, $s3, 0x74A0
    ctx->pc = 0x2c1064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
label_2c1068:
    // 0x2c1068: 0x2685c218  addiu       $a1, $s4, -0x3DE8
    ctx->pc = 0x2c1068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951448));
    // 0x2c106c: 0x8c4405ac  lw          $a0, 0x5AC($v0)
    ctx->pc = 0x2c106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1452)));
    // 0x2c1070: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2C1070u;
    SET_GPR_U32(ctx, 31, 0x2C1078u);
    ctx->pc = 0x2C1074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1070u;
    // 0x2c1074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2C1070u, 0x2C1078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1078u;
label_2c1078:
    // 0x2c1078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c107c: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C107Cu;
    {
        const bool branch_taken_0x2c107c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C107Cu;
        // 0x2c1080: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c107c) {
            ctx->pc = 0x2C10FCu;
            goto label_2c10fc;
        }
    }
    ctx->pc = 0x2C1084u;
    // 0x2c1084: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x2c1084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c1088: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2c1088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c108c: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C108Cu;
    {
        const bool branch_taken_0x2c108c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C108Cu;
        // 0x2c1090: 0x266274a0  addiu       $v0, $s3, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c108c) {
            ctx->pc = 0x2C1100u;
            goto label_2c1100;
        }
    }
    ctx->pc = 0x2C1094u;
    // 0x2c1094: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x2c1094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2c1098: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2c1098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2c109c: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x2c109cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2c10a0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C10A0u;
    {
        const bool branch_taken_0x2c10a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10A0u;
        // 0x2c10a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10a0) {
            ctx->pc = 0x2C10FCu;
            goto label_2c10fc;
        }
    }
    ctx->pc = 0x2C10A8u;
    // 0x2c10a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c10a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10ac: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2c10acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c10b0:
    // 0x2c10b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c10b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c10b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c10b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2c10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2c10bc: 0x94620036  lhu         $v0, 0x36($v1)
    ctx->pc = 0x2c10bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x2c10c0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c10c4: 0xa4620036  sh          $v0, 0x36($v1)
    ctx->pc = 0x2c10c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c10c8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x2c10c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c10cc: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2c10ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2c10d0: 0x90c50039  lbu         $a1, 0x39($a2)
    ctx->pc = 0x2c10d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 57)));
    // 0x2c10d4: 0x2610009c  addiu       $s0, $s0, 0x9C
    ctx->pc = 0x2c10d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x2c10d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2c10d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c10dc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c10dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c10e0: 0xc0b0c10  jal         func_2C3040
    ctx->pc = 0x2C10E0u;
    SET_GPR_U32(ctx, 31, 0x2C10E8u);
    ctx->pc = 0x2C10E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C10E0u;
    // 0x2c10e4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3040u, 0x2C10E0u, 0x2C10E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C10E8u;
label_2c10e8:
    // 0x2c10e8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c10ec: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2c10ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2c10f0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2c10f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c10f4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C10F4u;
    {
        const bool branch_taken_0x2c10f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c10f4) {
            ctx->pc = 0x2C10F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C10F4u;
            // 0x2c10f8: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C10B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c10b0;
        }
    }
    ctx->pc = 0x2C10FCu;
label_2c10fc:
    // 0x2c10fc: 0x266274a0  addiu       $v0, $s3, 0x74A0
    ctx->pc = 0x2c10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
label_2c1100:
    // 0x2c1100: 0x26a5c220  addiu       $a1, $s5, -0x3DE0
    ctx->pc = 0x2c1100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951456));
    // 0x2c1104: 0x8c4405ac  lw          $a0, 0x5AC($v0)
    ctx->pc = 0x2c1104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1452)));
    // 0x2c1108: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2C1108u;
    SET_GPR_U32(ctx, 31, 0x2C1110u);
    ctx->pc = 0x2C110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1108u;
    // 0x2c110c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2C1108u, 0x2C1110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1110u;
label_2c1110:
    // 0x2c1110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1114: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C1114u;
    {
        const bool branch_taken_0x2c1114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1114u;
        // 0x2c1118: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1114) {
            ctx->pc = 0x2C1190u;
            goto label_2c1190;
        }
    }
    ctx->pc = 0x2C111Cu;
    // 0x2c111c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x2c111cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c1120: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2c1120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c1124: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C1124u;
    {
        const bool branch_taken_0x2c1124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1124u;
        // 0x2c1128: 0x266274a0  addiu       $v0, $s3, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1124) {
            ctx->pc = 0x2C1194u;
            goto label_2c1194;
        }
    }
    ctx->pc = 0x2C112Cu;
    // 0x2c112c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2c112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2c1130: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2c1130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x2c1134: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2c1134u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2c1138: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2c1138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c113c: 0x6400014  bltz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C113Cu;
    {
        const bool branch_taken_0x2c113c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x2C1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C113Cu;
        // 0x2c1140: 0x2402009c  addiu       $v0, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c113c) {
            ctx->pc = 0x2C1190u;
            goto label_2c1190;
        }
    }
    ctx->pc = 0x2C1144u;
    // 0x2c1144: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x2c1144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2c1148: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2c1148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c114c: 0x0  nop
    ctx->pc = 0x2c114cu;
    // NOP
label_2c1150:
    // 0x2c1150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1154: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2c1154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2c1158: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2c1158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2c115c: 0x94620036  lhu         $v0, 0x36($v1)
    ctx->pc = 0x2c115cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x2c1160: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2c1160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2c1164: 0xa4620036  sh          $v0, 0x36($v1)
    ctx->pc = 0x2c1164u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c1168: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2c1168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c116c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2c116cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2c1170: 0x90c50039  lbu         $a1, 0x39($a2)
    ctx->pc = 0x2c1170u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 57)));
    // 0x2c1174: 0x2610ff64  addiu       $s0, $s0, -0x9C
    ctx->pc = 0x2c1174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967140));
    // 0x2c1178: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2c1178u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c117c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c1180: 0xc0b0c10  jal         func_2C3040
    ctx->pc = 0x2C1180u;
    SET_GPR_U32(ctx, 31, 0x2C1188u);
    ctx->pc = 0x2C1184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1180u;
    // 0x2c1184: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3040u, 0x2C1180u, 0x2C1188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1188u;
label_2c1188:
    // 0x2c1188: 0x643fff1  bgezl       $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C1188u;
    {
        const bool branch_taken_0x2c1188 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x2c1188) {
            ctx->pc = 0x2C118Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1188u;
            // 0x2c118c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1150;
        }
    }
    ctx->pc = 0x2C1190u;
label_2c1190:
    // 0x2c1190: 0x266274a0  addiu       $v0, $s3, 0x74A0
    ctx->pc = 0x2c1190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
label_2c1194:
    // 0x2c1194: 0x26c5c228  addiu       $a1, $s6, -0x3DD8
    ctx->pc = 0x2c1194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951464));
    // 0x2c1198: 0x8c4405ac  lw          $a0, 0x5AC($v0)
    ctx->pc = 0x2c1198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1452)));
    // 0x2c119c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2C119Cu;
    SET_GPR_U32(ctx, 31, 0x2C11A4u);
    ctx->pc = 0x2C11A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C119Cu;
    // 0x2c11a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2C119Cu, 0x2C11A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C11A4u;
label_2c11a4:
    // 0x2c11a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c11a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c11a8: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C11A8u;
    {
        const bool branch_taken_0x2c11a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11A8u;
        // 0x2c11ac: 0xae240018  sw          $a0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11a8) {
            ctx->pc = 0x2C1220u;
            goto label_2c1220;
        }
    }
    ctx->pc = 0x2C11B0u;
    // 0x2c11b0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x2c11b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c11b4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2c11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c11b8: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C11B8u;
    {
        const bool branch_taken_0x2c11b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11B8u;
        // 0x2c11bc: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11b8) {
            ctx->pc = 0x2C1220u;
            goto label_2c1220;
        }
    }
    ctx->pc = 0x2C11C0u;
    // 0x2c11c0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2c11c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2c11c4: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2c11c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2c11c8: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2c11c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c11cc: 0x6400014  bltz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C11CCu;
    {
        const bool branch_taken_0x2c11cc = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x2C11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11CCu;
        // 0x2c11d0: 0x2402009c  addiu       $v0, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11cc) {
            ctx->pc = 0x2C1220u;
            goto label_2c1220;
        }
    }
    ctx->pc = 0x2C11D4u;
    // 0x2c11d4: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x2c11d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2c11d8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2c11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2c11dc: 0x0  nop
    ctx->pc = 0x2c11dcu;
    // NOP
label_2c11e0:
    // 0x2c11e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c11e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c11e4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2c11e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2c11e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2c11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2c11ec: 0x94620036  lhu         $v0, 0x36($v1)
    ctx->pc = 0x2c11ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x2c11f0: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x2c11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2c11f4: 0xa4620036  sh          $v0, 0x36($v1)
    ctx->pc = 0x2c11f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c11f8: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x2c11f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2c11fc: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2c11fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2c1200: 0x90c50039  lbu         $a1, 0x39($a2)
    ctx->pc = 0x2c1200u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 57)));
    // 0x2c1204: 0x2610ff64  addiu       $s0, $s0, -0x9C
    ctx->pc = 0x2c1204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967140));
    // 0x2c1208: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2c1208u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c120c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c1210: 0xc0b0c10  jal         func_2C3040
    ctx->pc = 0x2C1210u;
    SET_GPR_U32(ctx, 31, 0x2C1218u);
    ctx->pc = 0x2C1214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1210u;
    // 0x2c1214: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3040u, 0x2C1210u, 0x2C1218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1218u;
label_2c1218:
    // 0x2c1218: 0x643fff1  bgezl       $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C1218u;
    {
        const bool branch_taken_0x2c1218 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x2c1218) {
            ctx->pc = 0x2C121Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1218u;
            // 0x2c121c: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C11E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c11e0;
        }
    }
    ctx->pc = 0x2C1220u;
label_2c1220:
    // 0x2c1220: 0xc0b04b2  jal         func_2C12C8
    ctx->pc = 0x2C1220u;
    SET_GPR_U32(ctx, 31, 0x2C1228u);
    ctx->pc = 0x2C1224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1220u;
    // 0x2c1224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C12C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C12C8u, 0x2C1220u, 0x2C1228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1228u;
label_2c1228:
    // 0x2c1228: 0xc0b0b48  jal         func_2C2D20
    ctx->pc = 0x2C1228u;
    SET_GPR_U32(ctx, 31, 0x2C1230u);
    ctx->pc = 0x2C122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1228u;
    // 0x2c122c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D20u, 0x2C1228u, 0x2C1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1230u;
label_2c1230:
    // 0x2c1230: 0xa2200064  sb          $zero, 0x64($s1)
    ctx->pc = 0x2c1230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1234: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x2c1234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x2c1238: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2c1238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x2c123c: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x2c123cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x2c1240: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x2c1240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x2c1244: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2c1244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c1248: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2c1248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c124c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2c124cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1250: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c1250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1254: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2c1254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1258: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2c1258u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c125c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2c125cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1264: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1264u;
        // 0x2c1268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C126Cu;
    // 0x2c126c: 0x0  nop
    ctx->pc = 0x2c126cu;
    // NOP
    ctx->pc = 0x2c1270u;
}
