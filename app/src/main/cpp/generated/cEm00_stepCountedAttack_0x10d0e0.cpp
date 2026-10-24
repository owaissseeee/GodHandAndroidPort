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

// Function: cEm00_stepCountedAttack
// Address: 0x10d0e0 - 0x10d3a8
void cEm00_stepCountedAttack_0x10d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepCountedAttack_0x10d0e0");
#endif

    switch (ctx->pc) {
        case 0x10d13cu: goto label_10d13c;
        case 0x10d148u: goto label_10d148;
        case 0x10d154u: goto label_10d154;
        case 0x10d18cu: goto label_10d18c;
        case 0x10d1b8u: goto label_10d1b8;
        case 0x10d1e4u: goto label_10d1e4;
        case 0x10d218u: goto label_10d218;
        case 0x10d23cu: goto label_10d23c;
        case 0x10d278u: goto label_10d278;
        case 0x10d280u: goto label_10d280;
        case 0x10d2acu: goto label_10d2ac;
        case 0x10d2b8u: goto label_10d2b8;
        case 0x10d320u: goto label_10d320;
        case 0x10d354u: goto label_10d354;
        case 0x10d360u: goto label_10d360;
        case 0x10d384u: goto label_10d384;
        default: break;
    }

    ctx->pc = 0x10d0e0u;

    // 0x10d0e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10d0e4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10d0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x10d0e8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x10d0ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10d0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x10d0f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10d0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10d0f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x10d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x10d0fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d100: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x10d100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x10d104: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x10d104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x10d108: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D108u;
    {
        const bool branch_taken_0x10d108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D108u;
        // 0x10d10c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d108) {
            ctx->pc = 0x10D120u;
            goto label_10d120;
        }
    }
    ctx->pc = 0x10D110u;
    // 0x10d110: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x10D110u;
    {
        const bool branch_taken_0x10d110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D110u;
        // 0x10d114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d110) {
            ctx->pc = 0x10D254u;
            goto label_10d254;
        }
    }
    ctx->pc = 0x10D118u;
    // 0x10d118: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x10D118u;
    {
        const bool branch_taken_0x10d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d118) {
            ctx->pc = 0x10D358u;
            goto label_10d358;
        }
    }
    ctx->pc = 0x10D120u;
label_10d120:
    // 0x10d120: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10d120u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10d124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d128: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x10d128u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x10d12c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x10d12cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x10d130: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x10d130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d134: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x10D134u;
    SET_GPR_U32(ctx, 31, 0x10D13Cu);
    ctx->pc = 0x10D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D134u;
    // 0x10d138: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x10D134u, 0x10D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D13Cu;
label_10d13c:
    // 0x10d13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d140: 0xc049150  jal         func_124540
    ctx->pc = 0x10D140u;
    SET_GPR_U32(ctx, 31, 0x10D148u);
    ctx->pc = 0x10D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D140u;
    // 0x10d144: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10D140u, 0x10D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D148u;
label_10d148:
    // 0x10d148: 0x8e251620  lw          $a1, 0x1620($s1)
    ctx->pc = 0x10d148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5664)));
    // 0x10d14c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x10D14Cu;
    SET_GPR_U32(ctx, 31, 0x10D154u);
    ctx->pc = 0x10D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D14Cu;
    // 0x10d150: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x10D14Cu, 0x10D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D154u;
label_10d154:
    // 0x10d154: 0x92231614  lbu         $v1, 0x1614($s1)
    ctx->pc = 0x10d154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5652)));
    // 0x10d158: 0x10730011  beq         $v1, $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x10D158u;
    {
        const bool branch_taken_0x10d158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x10D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D158u;
        // 0x10d15c: 0xae201620  sw          $zero, 0x1620($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d158) {
            ctx->pc = 0x10D1A0u;
            goto label_10d1a0;
        }
    }
    ctx->pc = 0x10D160u;
    // 0x10d160: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x10d160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10d164: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D164u;
    {
        const bool branch_taken_0x10d164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d164) {
            ctx->pc = 0x10D168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D164u;
            // 0x10d168: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D178u;
            goto label_10d178;
        }
    }
    ctx->pc = 0x10D16Cu;
    // 0x10d16c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d170: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10D170u;
    {
        const bool branch_taken_0x10d170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D170u;
        // 0x10d174: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d170) {
            ctx->pc = 0x10D1D0u;
            goto label_10d1d0;
        }
    }
    ctx->pc = 0x10D178u;
label_10d178:
    // 0x10d178: 0x8c430284  lw          $v1, 0x284($v0)
    ctx->pc = 0x10d178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x10d17c: 0x8c440288  lw          $a0, 0x288($v0)
    ctx->pc = 0x10d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
    // 0x10d180: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10d180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d184: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10D184u;
    SET_GPR_U32(ctx, 31, 0x10D18Cu);
    ctx->pc = 0x10D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D184u;
    // 0x10d188: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10D184u, 0x10D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D18Cu;
label_10d18c:
    // 0x10d18c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10d18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10d190: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x10D190u;
    {
        const bool branch_taken_0x10d190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d190) {
            ctx->pc = 0x10D194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D190u;
            // 0x10d194: 0xa2331614  sb          $s3, 0x1614($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 5652), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D1F4u;
            goto label_10d1f4;
        }
    }
    ctx->pc = 0x10D198u;
    // 0x10d198: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D198u;
    {
        const bool branch_taken_0x10d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D198u;
        // 0x10d19c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d198) {
            ctx->pc = 0x10D1C8u;
            goto label_10d1c8;
        }
    }
    ctx->pc = 0x10D1A0u;
label_10d1a0:
    // 0x10d1a0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x10d1a4: 0x8c43027c  lw          $v1, 0x27C($v0)
    ctx->pc = 0x10d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x10d1a8: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x10d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x10d1ac: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10d1acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d1b0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10D1B0u;
    SET_GPR_U32(ctx, 31, 0x10D1B8u);
    ctx->pc = 0x10D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1B0u;
    // 0x10d1b4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10D1B0u, 0x10D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1B8u;
label_10d1b8:
    // 0x10d1b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10d1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10d1bc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x10D1BCu;
    {
        const bool branch_taken_0x10d1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d1bc) {
            ctx->pc = 0x10D1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D1BCu;
            // 0x10d1c0: 0xa2201614  sb          $zero, 0x1614($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 5652), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D1F4u;
            goto label_10d1f4;
        }
    }
    ctx->pc = 0x10D1C4u;
    // 0x10d1c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10d1c8:
    // 0x10d1c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10D1C8u;
    {
        const bool branch_taken_0x10d1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1C8u;
        // 0x10d1cc: 0xa2221614  sb          $v0, 0x1614($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5652), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1c8) {
            ctx->pc = 0x10D1F4u;
            goto label_10d1f4;
        }
    }
    ctx->pc = 0x10D1D0u;
label_10d1d0:
    // 0x10d1d0: 0x8c43028c  lw          $v1, 0x28C($v0)
    ctx->pc = 0x10d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 652)));
    // 0x10d1d4: 0x8c440290  lw          $a0, 0x290($v0)
    ctx->pc = 0x10d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x10d1d8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10d1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d1dc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10D1DCu;
    SET_GPR_U32(ctx, 31, 0x10D1E4u);
    ctx->pc = 0x10D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1DCu;
    // 0x10d1e0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10D1DCu, 0x10D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1E4u;
label_10d1e4:
    // 0x10d1e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10d1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10d1e8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x10D1E8u;
    {
        const bool branch_taken_0x10d1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d1e8) {
            ctx->pc = 0x10D1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D1E8u;
            // 0x10d1ec: 0xa2331614  sb          $s3, 0x1614($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 5652), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D1F4u;
            goto label_10d1f4;
        }
    }
    ctx->pc = 0x10D1F0u;
    // 0x10d1f0: 0xa2201614  sb          $zero, 0x1614($s1)
    ctx->pc = 0x10d1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5652), (uint8_t)GPR_U32(ctx, 0));
label_10d1f4:
    // 0x10d1f4: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x10d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x10d1f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1fc: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x10d1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x10d200: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x10d200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10d204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d208: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10d208u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d20c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10d20cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d210: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x10D210u;
    SET_GPR_U32(ctx, 31, 0x10D218u);
    ctx->pc = 0x10D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D210u;
    // 0x10d214: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x10D210u, 0x10D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D218u;
label_10d218:
    // 0x10d218: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x10d218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x10d21c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10d21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10d220: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10d220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d224: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10d224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d22c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10d22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d230: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10d230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d234: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10D234u;
    SET_GPR_U32(ctx, 31, 0x10D23Cu);
    ctx->pc = 0x10D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D234u;
    // 0x10d238: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10D234u, 0x10D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D23Cu;
label_10d23c:
    // 0x10d23c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x10d23cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x10d240: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x10d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10d244: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x10d244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x10d248: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10d248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10d24c: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x10d24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x10d250: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x10d250u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_10d254:
    // 0x10d254: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10d254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x10d258: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10D258u;
    {
        const bool branch_taken_0x10d258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D258u;
        // 0x10d25c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d258) {
            ctx->pc = 0x10D264u;
            goto label_10d264;
        }
    }
    ctx->pc = 0x10D260u;
    // 0x10d260: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10d260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10d264:
    // 0x10d264: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x10d264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x10d268: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10d268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x10d26c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10d26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10d270: 0xc04939a  jal         func_124E68
    ctx->pc = 0x10D270u;
    SET_GPR_U32(ctx, 31, 0x10D278u);
    ctx->pc = 0x10D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D270u;
    // 0x10d274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10D270u, 0x10D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D278u;
label_10d278:
    // 0x10d278: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10D278u;
    SET_GPR_U32(ctx, 31, 0x10D280u);
    ctx->pc = 0x10D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D278u;
    // 0x10d27c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10D278u, 0x10D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D280u;
label_10d280:
    // 0x10d280: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D280u;
    {
        const bool branch_taken_0x10d280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d280) {
            ctx->pc = 0x10D298u;
            goto label_10d298;
        }
    }
    ctx->pc = 0x10D288u;
    // 0x10d288: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x10d288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d28c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x10d28cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d290: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10d290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d294: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10d294u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_10d298:
    // 0x10d298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d29c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10d29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10d2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2a4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10D2A4u;
    SET_GPR_U32(ctx, 31, 0x10D2ACu);
    ctx->pc = 0x10D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2A4u;
    // 0x10d2a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10D2A4u, 0x10D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2ACu;
label_10d2ac:
    // 0x10d2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2b0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x10D2B0u;
    SET_GPR_U32(ctx, 31, 0x10D2B8u);
    ctx->pc = 0x10D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2B0u;
    // 0x10d2b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10D2B0u, 0x10D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2B8u;
label_10d2b8:
    // 0x10d2b8: 0x8e2415b4  lw          $a0, 0x15B4($s1)
    ctx->pc = 0x10d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x10d2bc: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x10D2BCu;
    {
        const bool branch_taken_0x10d2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2BCu;
        // 0x10d2c0: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2bc) {
            ctx->pc = 0x10D354u;
            goto label_10d354;
        }
    }
    ctx->pc = 0x10D2C4u;
    // 0x10d2c4: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x10d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x10d2c8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10d2cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10d2d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10d2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d2d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10d2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10d2d8: 0x8e2515b0  lw          $a1, 0x15B0($s1)
    ctx->pc = 0x10d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x10d2dc: 0xae2415b4  sw          $a0, 0x15B4($s1)
    ctx->pc = 0x10d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 4));
    // 0x10d2e0: 0xae2215f4  sw          $v0, 0x15F4($s1)
    ctx->pc = 0x10d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
    // 0x10d2e4: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10D2E4u;
    {
        const bool branch_taken_0x10d2e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2E4u;
        // 0x10d2e8: 0xa2261603  sb          $a2, 0x1603($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5635), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2e4) {
            ctx->pc = 0x10D32Cu;
            goto label_10d32c;
        }
    }
    ctx->pc = 0x10D2ECu;
    // 0x10d2ec: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x10d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x10d2f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10d2f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d2f4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x10d2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10d2f8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x10d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d2fc: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x10d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x10d300: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10d300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x10d304: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10d304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10d308: 0x24848040  addiu       $a0, $a0, -0x7FC0
    ctx->pc = 0x10d308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    // 0x10d30c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x10d30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x10d310: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10d310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d314: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10d314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d318: 0xc0ae384  jal         func_2B8E10
    ctx->pc = 0x10D318u;
    SET_GPR_U32(ctx, 31, 0x10D320u);
    ctx->pc = 0x10D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D318u;
    // 0x10d31c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8E10u, 0x10D318u, 0x10D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D320u;
label_10d320:
    // 0x10d320: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10D320u;
    {
        const bool branch_taken_0x10d320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D320u;
        // 0x10d324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d320) {
            ctx->pc = 0x10D32Cu;
            goto label_10d32c;
        }
    }
    ctx->pc = 0x10D328u;
    // 0x10d328: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x10d328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_10d32c:
    // 0x10d32c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x10d330: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D330u;
    {
        const bool branch_taken_0x10d330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D330u;
        // 0x10d334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d330) {
            ctx->pc = 0x10D358u;
            goto label_10d358;
        }
    }
    ctx->pc = 0x10D338u;
    // 0x10d338: 0x8e2315b0  lw          $v1, 0x15B0($s1)
    ctx->pc = 0x10d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x10d33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d340: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D340u;
    {
        const bool branch_taken_0x10d340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D340u;
        // 0x10d344: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d340) {
            ctx->pc = 0x10D358u;
            goto label_10d358;
        }
    }
    ctx->pc = 0x10D348u;
    // 0x10d348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d34c: 0xc04a50c  jal         func_129430
    ctx->pc = 0x10D34Cu;
    SET_GPR_U32(ctx, 31, 0x10D354u);
    ctx->pc = 0x10D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D34Cu;
    // 0x10d350: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129430u, 0x10D34Cu, 0x10D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D354u;
label_10d354:
    // 0x10d354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d358:
    // 0x10d358: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10D358u;
    SET_GPR_U32(ctx, 31, 0x10D360u);
    ctx->pc = 0x10D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D358u;
    // 0x10d35c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10D358u, 0x10D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D360u;
label_10d360:
    // 0x10d360: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D360u;
    {
        const bool branch_taken_0x10d360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D360u;
        // 0x10d364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d360) {
            ctx->pc = 0x10D384u;
            goto label_10d384;
        }
    }
    ctx->pc = 0x10D368u;
    // 0x10d368: 0x8e2315b0  lw          $v1, 0x15B0($s1)
    ctx->pc = 0x10d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x10d36c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D36Cu;
    {
        const bool branch_taken_0x10d36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D36Cu;
        // 0x10d370: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d36c) {
            ctx->pc = 0x10D388u;
            goto label_10d388;
        }
    }
    ctx->pc = 0x10D374u;
    // 0x10d374: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d37c: 0xc04a50c  jal         func_129430
    ctx->pc = 0x10D37Cu;
    SET_GPR_U32(ctx, 31, 0x10D384u);
    ctx->pc = 0x10D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D37Cu;
    // 0x10d380: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129430u, 0x10D37Cu, 0x10D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D384u;
label_10d384:
    // 0x10d384: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10d384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10d388:
    // 0x10d388: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10d388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d38c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10d38cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10d390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d394: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x10d394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d39c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x10d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10d3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3A0u;
        // 0x10d3a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D3A8u;
}
