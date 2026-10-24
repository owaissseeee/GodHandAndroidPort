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

// Function: func_002AC298
// Address: 0x2ac298 - 0x2ac378
void func_002AC298_0x2ac298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AC298_0x2ac298");
#endif

    switch (ctx->pc) {
        case 0x2ac338u: goto label_2ac338;
        default: break;
    }

    ctx->pc = 0x2ac298u;

    // 0x2ac298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac29c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ac29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ac2a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ac2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ac2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac2a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ac2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac2ac: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2ac2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ac2b0: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x2ac2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ac2b4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2ac2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2ac2b8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2AC2B8u;
    {
        const bool branch_taken_0x2ac2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2B8u;
        // 0x2ac2bc: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2b8) {
            ctx->pc = 0x2AC364u;
            goto label_2ac364;
        }
    }
    ctx->pc = 0x2AC2C0u;
    // 0x2ac2c0: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x2ac2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac2c4: 0x31020800  andi        $v0, $t0, 0x800
    ctx->pc = 0x2ac2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x2ac2c8: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AC2C8u;
    {
        const bool branch_taken_0x2ac2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac2c8) {
            ctx->pc = 0x2AC2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC2C8u;
            // 0x2ac2cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC368u;
            goto label_2ac368;
        }
    }
    ctx->pc = 0x2AC2D0u;
    // 0x2ac2d0: 0x80a2005f  lb          $v0, 0x5F($a1)
    ctx->pc = 0x2ac2d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 95)));
    // 0x2ac2d4: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2AC2D4u;
    {
        const bool branch_taken_0x2ac2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac2d4) {
            ctx->pc = 0x2AC2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC2D4u;
            // 0x2ac2d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC368u;
            goto label_2ac368;
        }
    }
    ctx->pc = 0x2AC2DCu;
    // 0x2ac2dc: 0x84a60214  lh          $a2, 0x214($a1)
    ctx->pc = 0x2ac2dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 532)));
    // 0x2ac2e0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2ac2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2ac2e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ac2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ac2e8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2ac2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2ac2ec: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2ac2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ac2f0: 0x443818  mult        $a3, $v0, $a0
    ctx->pc = 0x2ac2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2ac2f4: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x2ac2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ac2f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC2F8u;
    {
        const bool branch_taken_0x2ac2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2F8u;
        // 0x2ac2fc: 0x84440220  lh          $a0, 0x220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2f8) {
            ctx->pc = 0x2AC318u;
            goto label_2ac318;
        }
    }
    ctx->pc = 0x2AC300u;
    // 0x2ac300: 0x960200a4  lhu         $v0, 0xA4($s0)
    ctx->pc = 0x2ac300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2ac304: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ac304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac308: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC308u;
    {
        const bool branch_taken_0x2ac308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC308u;
        // 0x2ac30c: 0x35020800  ori         $v0, $t0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac308) {
            ctx->pc = 0x2AC328u;
            goto label_2ac328;
        }
    }
    ctx->pc = 0x2AC310u;
    // 0x2ac310: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2AC310u;
    {
        const bool branch_taken_0x2ac310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC310u;
        // 0x2ac314: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac310) {
            ctx->pc = 0x2AC364u;
            goto label_2ac364;
        }
    }
    ctx->pc = 0x2AC318u;
label_2ac318:
    // 0x2ac318: 0x960200a4  lhu         $v0, 0xA4($s0)
    ctx->pc = 0x2ac318u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2ac31c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ac31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac320: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AC320u;
    {
        const bool branch_taken_0x2ac320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac320) {
            ctx->pc = 0x2AC324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC320u;
            // 0x2ac324: 0xa60000a4  sh          $zero, 0xA4($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC328u;
            goto label_2ac328;
        }
    }
    ctx->pc = 0x2AC328u;
label_2ac328:
    // 0x2ac328: 0x860500a4  lh          $a1, 0xA4($s0)
    ctx->pc = 0x2ac328u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2ac32c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ac32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac330: 0xc0ab194  jal         func_2AC650
    ctx->pc = 0x2AC330u;
    SET_GPR_U32(ctx, 31, 0x2AC338u);
    ctx->pc = 0x2AC334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC330u;
    // 0x2ac334: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC650u, 0x2AC330u, 0x2AC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC338u;
label_2ac338:
    // 0x2ac338: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2ac338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2ac33c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac340: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2ac340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac344: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ac344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ac348: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x2ac348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x2ac34c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ac34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ac350: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC350u;
    {
        const bool branch_taken_0x2ac350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC350u;
        // 0x2ac354: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac350) {
            ctx->pc = 0x2AC364u;
            goto label_2ac364;
        }
    }
    ctx->pc = 0x2AC358u;
    // 0x2ac358: 0x960200a6  lhu         $v0, 0xA6($s0)
    ctx->pc = 0x2ac358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x2ac35c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ac360: 0xa60200a6  sh          $v0, 0xA6($s0)
    ctx->pc = 0x2ac360u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 2));
label_2ac364:
    // 0x2ac364: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ac364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac368:
    // 0x2ac368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac36c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC36Cu;
        // 0x2ac370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC374u;
    // 0x2ac374: 0x0  nop
    ctx->pc = 0x2ac374u;
    // NOP
    ctx->pc = 0x2ac378u;
}
