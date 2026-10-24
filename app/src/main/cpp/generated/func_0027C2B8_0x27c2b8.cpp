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

// Function: func_0027C2B8
// Address: 0x27c2b8 - 0x27c460
void func_0027C2B8_0x27c2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027C2B8_0x27c2b8");
#endif

    switch (ctx->pc) {
        case 0x27c2f8u: goto label_27c2f8;
        case 0x27c334u: goto label_27c334;
        case 0x27c350u: goto label_27c350;
        case 0x27c384u: goto label_27c384;
        case 0x27c3a0u: goto label_27c3a0;
        case 0x27c3c0u: goto label_27c3c0;
        case 0x27c444u: goto label_27c444;
        default: break;
    }

    ctx->pc = 0x27c2b8u;

    // 0x27c2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c2bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27c2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27c2c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c2c8: 0x8e021560  lw          $v0, 0x1560($s0)
    ctx->pc = 0x27c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
    // 0x27c2cc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27c2ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27c2d0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x27c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x27c2d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C2D4u;
    {
        const bool branch_taken_0x27c2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2D4u;
        // 0x27c2d8: 0xae021560  sw          $v0, 0x1560($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2d4) {
            ctx->pc = 0x27C2F0u;
            goto label_27c2f0;
        }
    }
    ctx->pc = 0x27C2DCu;
    // 0x27c2dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c2e0: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x27C2E0u;
    {
        const bool branch_taken_0x27c2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c2e0) {
            ctx->pc = 0x27C3B8u;
            goto label_27c3b8;
        }
    }
    ctx->pc = 0x27C2E8u;
    // 0x27c2e8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27C2E8u;
    {
        const bool branch_taken_0x27c2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2E8u;
        // 0x27c2ec: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2e8) {
            ctx->pc = 0x27C3DCu;
            goto label_27c3dc;
        }
    }
    ctx->pc = 0x27C2F0u;
label_27c2f0:
    // 0x27c2f0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x27C2F0u;
    SET_GPR_U32(ctx, 31, 0x27C2F8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x27C2F0u, 0x27C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C2F8u;
label_27c2f8:
    // 0x27c2f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27c2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27c2fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27c2fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c300: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x27C300u;
    {
        const bool branch_taken_0x27c300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C300u;
        // 0x27c304: 0xa20202f7  sb          $v0, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c300) {
            ctx->pc = 0x27C358u;
            goto label_27c358;
        }
    }
    ctx->pc = 0x27C308u;
    // 0x27c308: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c310: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c314: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27c314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27c318: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x27c318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x27c31c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c31cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c320: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x27c320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27c324: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c328: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27c328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27c32c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C32Cu;
    SET_GPR_U32(ctx, 31, 0x27C334u);
    ctx->pc = 0x27C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C32Cu;
    // 0x27c330: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C32Cu, 0x27C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C334u;
label_27c334:
    // 0x27c334: 0x8e0915b0  lw          $t1, 0x15B0($s0)
    ctx->pc = 0x27c334u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x27c338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c33c: 0x240500bc  addiu       $a1, $zero, 0xBC
    ctx->pc = 0x27c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x27c340: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x27c340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27c344: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27c344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c348: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x27C348u;
    SET_GPR_U32(ctx, 31, 0x27C350u);
    ctx->pc = 0x27C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C348u;
    // 0x27c34c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x27C348u, 0x27C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C350u;
label_27c350:
    // 0x27c350: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27C350u;
    {
        const bool branch_taken_0x27c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C350u;
        // 0x27c354: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c350) {
            ctx->pc = 0x27C3A4u;
            goto label_27c3a4;
        }
    }
    ctx->pc = 0x27C358u;
label_27c358:
    // 0x27c358: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c360: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c364: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27c364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27c368: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x27c368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27c36c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c36cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c370: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x27c370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x27c374: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c378: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27c378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27c37c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C37Cu;
    SET_GPR_U32(ctx, 31, 0x27C384u);
    ctx->pc = 0x27C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C37Cu;
    // 0x27c380: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C37Cu, 0x27C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C384u;
label_27c384:
    // 0x27c384: 0x8e0915b0  lw          $t1, 0x15B0($s0)
    ctx->pc = 0x27c384u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x27c388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c38c: 0x240500bc  addiu       $a1, $zero, 0xBC
    ctx->pc = 0x27c38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x27c390: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x27c390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x27c394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27c394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c398: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x27C398u;
    SET_GPR_U32(ctx, 31, 0x27C3A0u);
    ctx->pc = 0x27C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C398u;
    // 0x27c39c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x27C398u, 0x27C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3A0u;
label_27c3a0:
    // 0x27c3a0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27c3a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27c3a4:
    // 0x27c3a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c3a8: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x27c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x27c3ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27c3b0: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x27c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x27c3b4: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x27c3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_27c3b8:
    // 0x27c3b8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27C3B8u;
    SET_GPR_U32(ctx, 31, 0x27C3C0u);
    ctx->pc = 0x27C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C3B8u;
    // 0x27c3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27C3B8u, 0x27C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3C0u;
label_27c3c0:
    // 0x27c3c0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C3C0u;
    {
        const bool branch_taken_0x27c3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c3c0) {
            ctx->pc = 0x27C3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C3C0u;
            // 0x27c3c4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C3DCu;
            goto label_27c3dc;
        }
    }
    ctx->pc = 0x27C3C8u;
    // 0x27c3c8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27c3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c3cc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27c3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c3d0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27c3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c3d4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27c3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c3d8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x27c3d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_27c3dc:
    // 0x27c3dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27c3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27c3e0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27C3E0u;
    {
        const bool branch_taken_0x27c3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3E0u;
        // 0x27c3e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3e0) {
            ctx->pc = 0x27C44Cu;
            goto label_27c44c;
        }
    }
    ctx->pc = 0x27C3E8u;
    // 0x27c3e8: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x27c3e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27c3ec: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x27C3ECu;
    {
        const bool branch_taken_0x27c3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c3ec) {
            ctx->pc = 0x27C3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C3ECu;
            // 0x27c3f0: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C42Cu;
            goto label_27c42c;
        }
    }
    ctx->pc = 0x27C3F4u;
    // 0x27c3f4: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x27c3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c3f8: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x27c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c3fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27c3fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27c400: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27c400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27c404: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x27c404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c408: 0x0  nop
    ctx->pc = 0x27c408u;
    // NOP
    // 0x27c40c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x27C40Cu;
    {
        const bool branch_taken_0x27c40c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C40Cu;
        // 0x27c410: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c40c) {
            ctx->pc = 0x27C450u;
            goto label_27c450;
        }
    }
    ctx->pc = 0x27C414u;
    // 0x27c414: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x27c414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x27c418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27c418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27c420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c424: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27C424u;
    {
        const bool branch_taken_0x27c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C424u;
        // 0x27c428: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c424) {
            ctx->pc = 0x27C43Cu;
            goto label_27c43c;
        }
    }
    ctx->pc = 0x27C42Cu;
label_27c42c:
    // 0x27c42c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27C42Cu;
    {
        const bool branch_taken_0x27c42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C42Cu;
        // 0x27c430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c42c) {
            ctx->pc = 0x27C450u;
            goto label_27c450;
        }
    }
    ctx->pc = 0x27C434u;
    // 0x27c434: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x27c434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x27c438: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27c438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c43c:
    // 0x27c43c: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x27C43Cu;
    SET_GPR_U32(ctx, 31, 0x27C444u);
    ctx->pc = 0x27C440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C43Cu;
    // 0x27c440: 0x908502f7  lbu         $a1, 0x2F7($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 759)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x27C43Cu, 0x27C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C444u;
label_27c444:
    // 0x27c444: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27C444u;
    {
        const bool branch_taken_0x27c444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C444u;
        // 0x27c448: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c444) {
            ctx->pc = 0x27C454u;
            goto label_27c454;
        }
    }
    ctx->pc = 0x27C44Cu;
label_27c44c:
    // 0x27c44c: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x27c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_27c450:
    // 0x27c450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27c450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27c454:
    // 0x27c454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27c454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c458: 0x3e00008  jr          $ra
    ctx->pc = 0x27C458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C458u;
        // 0x27c45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C460u;
}
