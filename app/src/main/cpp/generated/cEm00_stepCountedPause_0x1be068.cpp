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

// Function: cEm00_stepCountedPause
// Address: 0x1be068 - 0x1be198
void cEm00_stepCountedPause_0x1be068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepCountedPause_0x1be068");
#endif

    switch (ctx->pc) {
        case 0x1be0e0u: goto label_1be0e0;
        case 0x1be108u: goto label_1be108;
        case 0x1be11cu: goto label_1be11c;
        default: break;
    }

    ctx->pc = 0x1be068u;

    // 0x1be068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be06c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1be06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1be070: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be07c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1be07cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be080: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1be080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
    // 0x1be084: 0x10710023  beq         $v1, $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BE084u;
    {
        const bool branch_taken_0x1be084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE084u;
        // 0x1be088: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be084) {
            ctx->pc = 0x1BE114u;
            goto label_1be114;
        }
    }
    ctx->pc = 0x1BE08Cu;
    // 0x1be08c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE08Cu;
    {
        const bool branch_taken_0x1be08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be08c) {
            ctx->pc = 0x1BE090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE08Cu;
            // 0x1be090: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE0A4u;
            goto label_1be0a4;
        }
    }
    ctx->pc = 0x1BE094u;
    // 0x1be094: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE094u;
    {
        const bool branch_taken_0x1be094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE094u;
        // 0x1be098: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be094) {
            ctx->pc = 0x1BE0BCu;
            goto label_1be0bc;
        }
    }
    ctx->pc = 0x1BE09Cu;
    // 0x1be09c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1BE09Cu;
    {
        const bool branch_taken_0x1be09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE09Cu;
        // 0x1be0a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be09c) {
            ctx->pc = 0x1BE184u;
            goto label_1be184;
        }
    }
    ctx->pc = 0x1BE0A4u;
label_1be0a4:
    // 0x1be0a4: 0x10640025  beq         $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BE0A4u;
    {
        const bool branch_taken_0x1be0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1BE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0A4u;
        // 0x1be0a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0a4) {
            ctx->pc = 0x1BE13Cu;
            goto label_1be13c;
        }
    }
    ctx->pc = 0x1BE0ACu;
    // 0x1be0ac: 0x5062002e  beql        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BE0ACu;
    {
        const bool branch_taken_0x1be0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1be0ac) {
            ctx->pc = 0x1BE0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE0ACu;
            // 0x1be0b0: 0x8e0205b0  lw          $v0, 0x5B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE168u;
            goto label_1be168;
        }
    }
    ctx->pc = 0x1BE0B4u;
    // 0x1be0b4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1BE0B4u;
    {
        const bool branch_taken_0x1be0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0B4u;
        // 0x1be0b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0b4) {
            ctx->pc = 0x1BE184u;
            goto label_1be184;
        }
    }
    ctx->pc = 0x1BE0BCu;
label_1be0bc:
    // 0x1be0bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1be0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be0c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1be0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1be0c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1be0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be0c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1be0c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1be0ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1be0d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1be0d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0d8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1BE0D8u;
    SET_GPR_U32(ctx, 31, 0x1BE0E0u);
    ctx->pc = 0x1BE0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0D8u;
    // 0x1be0dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1BE0D8u, 0x1BE0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0E0u;
label_1be0e0:
    // 0x1be0e0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x1be0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1be0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1be0e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be0ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0f0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x1be0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1be0f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1be0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1be0f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1be0fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be100: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1BE100u;
    SET_GPR_U32(ctx, 31, 0x1BE108u);
    ctx->pc = 0x1BE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE100u;
    // 0x1be104: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1BE100u, 0x1BE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE108u;
label_1be108:
    // 0x1be108: 0xa21102f5  sb          $s1, 0x2F5($s0)
    ctx->pc = 0x1be108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 17));
    // 0x1be10c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1be10cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be110: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1be110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1be114:
    // 0x1be114: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1BE114u;
    SET_GPR_U32(ctx, 31, 0x1BE11Cu);
    ctx->pc = 0x1BE118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE114u;
    // 0x1be118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1BE114u, 0x1BE11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE11Cu;
label_1be11c:
    // 0x1be11c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BE11Cu;
    {
        const bool branch_taken_0x1be11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE11Cu;
        // 0x1be120: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be11c) {
            ctx->pc = 0x1BE180u;
            goto label_1be180;
        }
    }
    ctx->pc = 0x1BE124u;
    // 0x1be124: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1be124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be128: 0xae020900  sw          $v0, 0x900($s0)
    ctx->pc = 0x1be128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2304), GPR_U32(ctx, 2));
    // 0x1be12c: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x1be12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be130: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1be130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be134: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE134u;
    {
        const bool branch_taken_0x1be134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE134u;
        // 0x1be138: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be134) {
            ctx->pc = 0x1BE180u;
            goto label_1be180;
        }
    }
    ctx->pc = 0x1BE13Cu;
label_1be13c:
    // 0x1be13c: 0x8e020900  lw          $v0, 0x900($s0)
    ctx->pc = 0x1be13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2304)));
    // 0x1be140: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE140u;
    {
        const bool branch_taken_0x1be140 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1BE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE140u;
        // 0x1be144: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be140) {
            ctx->pc = 0x1BE160u;
            goto label_1be160;
        }
    }
    ctx->pc = 0x1BE148u;
    // 0x1be148: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be14c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1be14cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be150: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1be150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be154: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1be154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be158: 0x8e020900  lw          $v0, 0x900($s0)
    ctx->pc = 0x1be158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2304)));
    // 0x1be15c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1be15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1be160:
    // 0x1be160: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE160u;
    {
        const bool branch_taken_0x1be160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE160u;
        // 0x1be164: 0xae020900  sw          $v0, 0x900($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be160) {
            ctx->pc = 0x1BE180u;
            goto label_1be180;
        }
    }
    ctx->pc = 0x1BE168u;
label_1be168:
    // 0x1be168: 0xa20402f4  sb          $a0, 0x2F4($s0)
    ctx->pc = 0x1be168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be16c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1be16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1be170: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1be170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be174: 0xae0205b0  sw          $v0, 0x5B0($s0)
    ctx->pc = 0x1be174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
    // 0x1be178: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1be178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be17c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1be17cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1be180:
    // 0x1be180: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1be180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1be184:
    // 0x1be184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be18c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE18Cu;
        // 0x1be190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE194u;
    // 0x1be194: 0x0  nop
    ctx->pc = 0x1be194u;
    // NOP
    ctx->pc = 0x1be198u;
}
