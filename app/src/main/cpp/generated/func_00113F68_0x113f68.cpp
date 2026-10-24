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

// Function: func_00113F68
// Address: 0x113f68 - 0x114120
void func_00113F68_0x113f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00113F68_0x113f68");
#endif

    switch (ctx->pc) {
        case 0x113fa8u: goto label_113fa8;
        case 0x113fb0u: goto label_113fb0;
        case 0x113fbcu: goto label_113fbc;
        case 0x113fe0u: goto label_113fe0;
        case 0x113ff0u: goto label_113ff0;
        case 0x113ffcu: goto label_113ffc;
        case 0x114028u: goto label_114028;
        case 0x114044u: goto label_114044;
        case 0x11405cu: goto label_11405c;
        case 0x114064u: goto label_114064;
        case 0x114078u: goto label_114078;
        case 0x11409cu: goto label_11409c;
        case 0x1140a8u: goto label_1140a8;
        case 0x1140d4u: goto label_1140d4;
        case 0x1140e0u: goto label_1140e0;
        case 0x1140f0u: goto label_1140f0;
        case 0x114100u: goto label_114100;
        default: break;
    }

    ctx->pc = 0x113f68u;

    // 0x113f68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x113f6c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x113f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x113f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113f74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x113f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x113f78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x113f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113f7c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x113f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x113f80: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x113f80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x113f84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x113f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x113f88: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x113f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f94: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x113f94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x113f98: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x113f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x113f9c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x113f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x113fa0: 0xc0a480c  jal         func_292030
    ctx->pc = 0x113FA0u;
    SET_GPR_U32(ctx, 31, 0x113FA8u);
    ctx->pc = 0x113FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FA0u;
    // 0x113fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x113FA0u, 0x113FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FA8u;
label_113fa8:
    // 0x113fa8: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x113FA8u;
    SET_GPR_U32(ctx, 31, 0x113FB0u);
    ctx->pc = 0x113FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FA8u;
    // 0x113fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x113FA8u, 0x113FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FB0u;
label_113fb0:
    // 0x113fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113fb4: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x113FB4u;
    SET_GPR_U32(ctx, 31, 0x113FBCu);
    ctx->pc = 0x113FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FB4u;
    // 0x113fb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x113FB4u, 0x113FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FBCu;
label_113fbc:
    // 0x113fbc: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x113fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x113fc0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x113FC0u;
    {
        const bool branch_taken_0x113fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FC0u;
        // 0x113fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fc0) {
            ctx->pc = 0x113FD8u;
            goto label_113fd8;
        }
    }
    ctx->pc = 0x113FC8u;
    // 0x113fc8: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x113FC8u;
    {
        const bool branch_taken_0x113fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x113fc8) {
            ctx->pc = 0x11403Cu;
            goto label_11403c;
        }
    }
    ctx->pc = 0x113FD0u;
    // 0x113fd0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x113FD0u;
    {
        const bool branch_taken_0x113fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FD0u;
        // 0x113fd4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fd0) {
            ctx->pc = 0x1140ACu;
            goto label_1140ac;
        }
    }
    ctx->pc = 0x113FD8u;
label_113fd8:
    // 0x113fd8: 0xc049396  jal         func_124E58
    ctx->pc = 0x113FD8u;
    SET_GPR_U32(ctx, 31, 0x113FE0u);
    ctx->pc = 0x113FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FD8u;
    // 0x113fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x113FD8u, 0x113FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FE0u;
label_113fe0:
    // 0x113fe0: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x113fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x113fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113fe8: 0xc04a55e  jal         func_129578
    ctx->pc = 0x113FE8u;
    SET_GPR_U32(ctx, 31, 0x113FF0u);
    ctx->pc = 0x113FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FE8u;
    // 0x113fec: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x113FE8u, 0x113FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FF0u;
label_113ff0:
    // 0x113ff0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x113ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x113ff4: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x113FF4u;
    SET_GPR_U32(ctx, 31, 0x113FFCu);
    ctx->pc = 0x113FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FF4u;
    // 0x113ff8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x113FF4u, 0x113FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FFCu;
label_113ffc:
    // 0x113ffc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x113ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x114000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114004: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x114004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x114008: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x114008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11400c: 0x8c450604  lw          $a1, 0x604($v0)
    ctx->pc = 0x11400cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1540)));
    // 0x114010: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114014: 0x8c460608  lw          $a2, 0x608($v0)
    ctx->pc = 0x114014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1544)));
    // 0x114018: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x114018u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11401c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11401cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x114020: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x114020u;
    SET_GPR_U32(ctx, 31, 0x114028u);
    ctx->pc = 0x114024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114020u;
    // 0x114024: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x114020u, 0x114028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114028u;
label_114028:
    // 0x114028: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x114028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11402c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114030: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x114030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x114034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x114038: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x114038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11403c:
    // 0x11403c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11403Cu;
    SET_GPR_U32(ctx, 31, 0x114044u);
    ctx->pc = 0x114040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11403Cu;
    // 0x114040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11403Cu, 0x114044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114044u;
label_114044:
    // 0x114044: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x114044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x114048: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x114048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x11404c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11404Cu;
    {
        const bool branch_taken_0x11404c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11404c) {
            ctx->pc = 0x11405Cu;
            goto label_11405c;
        }
    }
    ctx->pc = 0x114054u;
    // 0x114054: 0xc0a4c44  jal         func_293110
    ctx->pc = 0x114054u;
    SET_GPR_U32(ctx, 31, 0x11405Cu);
    ctx->pc = 0x114058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114054u;
    // 0x114058: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293110u, 0x114054u, 0x11405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11405Cu;
label_11405c:
    // 0x11405c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11405Cu;
    SET_GPR_U32(ctx, 31, 0x114064u);
    ctx->pc = 0x114060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11405Cu;
    // 0x114060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11405Cu, 0x114064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114064u;
label_114064:
    // 0x114064: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114064u;
    {
        const bool branch_taken_0x114064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114064u;
        // 0x114068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114064) {
            ctx->pc = 0x114088u;
            goto label_114088;
        }
    }
    ctx->pc = 0x11406Cu;
    // 0x11406c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11406cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114070: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x114070u;
    SET_GPR_U32(ctx, 31, 0x114078u);
    ctx->pc = 0x114074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114070u;
    // 0x114074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x114070u, 0x114078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114078u;
label_114078:
    // 0x114078: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x114078u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11407c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11407cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x114080: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x114080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x114084: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x114084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_114088:
    // 0x114088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11408c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11408cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x114090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114094: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x114094u;
    SET_GPR_U32(ctx, 31, 0x11409Cu);
    ctx->pc = 0x114098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114094u;
    // 0x114098: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x114094u, 0x11409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11409Cu;
label_11409c:
    // 0x11409c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11409cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1140a0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1140A0u;
    SET_GPR_U32(ctx, 31, 0x1140A8u);
    ctx->pc = 0x1140A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140A0u;
    // 0x1140a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1140A0u, 0x1140A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140A8u;
label_1140a8:
    // 0x1140a8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1140a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_1140ac:
    // 0x1140ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1140acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1140b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1140B0u;
    {
        const bool branch_taken_0x1140b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140B0u;
        // 0x1140b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140b0) {
            ctx->pc = 0x1140D8u;
            goto label_1140d8;
        }
    }
    ctx->pc = 0x1140B8u;
    // 0x1140b8: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1140b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x1140bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1140BCu;
    {
        const bool branch_taken_0x1140bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140BCu;
        // 0x1140c0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140bc) {
            ctx->pc = 0x1140D4u;
            goto label_1140d4;
        }
    }
    ctx->pc = 0x1140C4u;
    // 0x1140c4: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x1140c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x1140c8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1140c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1140cc: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1140CCu;
    SET_GPR_U32(ctx, 31, 0x1140D4u);
    ctx->pc = 0x1140D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140CCu;
    // 0x1140d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1140CCu, 0x1140D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140D4u;
label_1140d4:
    // 0x1140d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1140d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1140d8:
    // 0x1140d8: 0xc048e4e  jal         func_123938
    ctx->pc = 0x1140D8u;
    SET_GPR_U32(ctx, 31, 0x1140E0u);
    ctx->pc = 0x1140DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140D8u;
    // 0x1140dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1140D8u, 0x1140E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140E0u;
label_1140e0:
    // 0x1140e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1140E0u;
    {
        const bool branch_taken_0x1140e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140E0u;
        // 0x1140e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140e0) {
            ctx->pc = 0x114104u;
            goto label_114104;
        }
    }
    ctx->pc = 0x1140E8u;
    // 0x1140e8: 0xc04a58c  jal         func_129630
    ctx->pc = 0x1140E8u;
    SET_GPR_U32(ctx, 31, 0x1140F0u);
    ctx->pc = 0x1140ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140E8u;
    // 0x1140ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1140E8u, 0x1140F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140F0u;
label_1140f0:
    // 0x1140f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1140f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1140f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140f8: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1140F8u;
    SET_GPR_U32(ctx, 31, 0x114100u);
    ctx->pc = 0x1140FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140F8u;
    // 0x1140fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1140F8u, 0x114100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114100u;
label_114100:
    // 0x114100: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x114100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_114104:
    // 0x114104: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x114104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114108: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x114108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11410c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114110: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x114110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x114114: 0x3e00008  jr          $ra
    ctx->pc = 0x114114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114114u;
        // 0x114118: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11411Cu;
    // 0x11411c: 0x0  nop
    ctx->pc = 0x11411cu;
    // NOP
    ctx->pc = 0x114120u;
}
