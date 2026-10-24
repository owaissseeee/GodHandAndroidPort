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

// Function: func_00150F68
// Address: 0x150f68 - 0x151168
void func_00150F68_0x150f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150F68_0x150f68");
#endif

    switch (ctx->pc) {
        case 0x15112cu: goto label_15112c;
        case 0x151158u: goto label_151158;
        default: break;
    }

    ctx->pc = 0x150f68u;

    // 0x150f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150f6c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x150f6cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150f74: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x150f74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f78: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x150f78u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f7c: 0x120c02d  daddu       $t8, $t1, $zero
    ctx->pc = 0x150f7cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f80: 0x5600006  bltz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x150F80u;
    {
        const bool branch_taken_0x150f80 = (GPR_S64(ctx, 11) < 0);
        ctx->pc = 0x150F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F80u;
        // 0x150f84: 0x8fb90010  lw          $t9, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f80) {
            ctx->pc = 0x150F9Cu;
            goto label_150f9c;
        }
    }
    ctx->pc = 0x150F88u;
    // 0x150f88: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x150f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x150f8c: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x150f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x150f90: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x150f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x150f94: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x150F94u;
    {
        const bool branch_taken_0x150f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F94u;
        // 0x150f98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f94) {
            ctx->pc = 0x15115Cu;
            goto label_15115c;
        }
    }
    ctx->pc = 0x150F9Cu;
label_150f9c:
    // 0x150f9c: 0x8dc6003c  lw          $a2, 0x3C($t6)
    ctx->pc = 0x150f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 60)));
    // 0x150fa0: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x150fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x150fa4: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150FA4u;
    {
        const bool branch_taken_0x150fa4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x150FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FA4u;
        // 0x150fa8: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fa4) {
            ctx->pc = 0x150FB4u;
            goto label_150fb4;
        }
    }
    ctx->pc = 0x150FACu;
    // 0x150fac: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x150FACu;
    {
        const bool branch_taken_0x150fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FACu;
        // 0x150fb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fac) {
            ctx->pc = 0x15115Cu;
            goto label_15115c;
        }
    }
    ctx->pc = 0x150FB4u;
label_150fb4:
    // 0x150fb4: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x150fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x150fb8: 0x8c8376b0  lw          $v1, 0x76B0($a0)
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30384)));
    // 0x150fbc: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x150fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x150fc0: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x150fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x150fc4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x150fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x150fc8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x150fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x150fcc: 0xadc4003c  sw          $a0, 0x3C($t6)
    ctx->pc = 0x150fccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 60), GPR_U32(ctx, 4));
    // 0x150fd0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x150fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x150fd4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x150fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x150fd8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x150fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x150fdc: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x150fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x150fe0: 0x11a4000e  beq         $t5, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x150FE0u;
    {
        const bool branch_taken_0x150fe0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 4));
        ctx->pc = 0x150FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FE0u;
        // 0x150fe4: 0x437021  addu        $t6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fe0) {
            ctx->pc = 0x15101Cu;
            goto label_15101c;
        }
    }
    ctx->pc = 0x150FE8u;
    // 0x150fe8: 0x29a20014  slti        $v0, $t5, 0x14
    ctx->pc = 0x150fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x150fec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x150FECu;
    {
        const bool branch_taken_0x150fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FECu;
        // 0x150ff0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fec) {
            ctx->pc = 0x151004u;
            goto label_151004;
        }
    }
    ctx->pc = 0x150FF4u;
    // 0x150ff4: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x150FF4u;
    {
        const bool branch_taken_0x150ff4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FF4u;
        // 0x150ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ff4) {
            ctx->pc = 0x151014u;
            goto label_151014;
        }
    }
    ctx->pc = 0x150FFCu;
    // 0x150ffc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x150FFCu;
    {
        const bool branch_taken_0x150ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FFCu;
        // 0x151000: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ffc) {
            ctx->pc = 0x151160u;
            goto label_151160;
        }
    }
    ctx->pc = 0x151004u;
label_151004:
    // 0x151004: 0x11a20007  beq         $t5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x151004u;
    {
        const bool branch_taken_0x151004 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        ctx->pc = 0x151008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151004u;
        // 0x151008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151004) {
            ctx->pc = 0x151024u;
            goto label_151024;
        }
    }
    ctx->pc = 0x15100Cu;
    // 0x15100c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x15100Cu;
    {
        const bool branch_taken_0x15100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15100Cu;
        // 0x151010: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15100c) {
            ctx->pc = 0x151160u;
            goto label_151160;
        }
    }
    ctx->pc = 0x151014u;
label_151014:
    // 0x151014: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x151014u;
    {
        const bool branch_taken_0x151014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151014u;
        // 0x151018: 0x187880  sll         $t7, $t8, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151014) {
            ctx->pc = 0x151030u;
            goto label_151030;
        }
    }
    ctx->pc = 0x15101Cu;
label_15101c:
    // 0x15101c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15101Cu;
    {
        const bool branch_taken_0x15101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15101Cu;
        // 0x151020: 0x300782d  daddu       $t7, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15101c) {
            ctx->pc = 0x151030u;
            goto label_151030;
        }
    }
    ctx->pc = 0x151024u;
label_151024:
    // 0x151024: 0x1817c2  srl         $v0, $t8, 31
    ctx->pc = 0x151024u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 24), 31));
    // 0x151028: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x15102c: 0x27843  sra         $t7, $v0, 1
    ctx->pc = 0x15102cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 2), 1));
label_151030:
    // 0x151030: 0x1ea0018  mult        $zero, $t7, $t2
    ctx->pc = 0x151030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x151034: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x151034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x151038: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15103c: 0x25c40070  addiu       $a0, $t6, 0x70
    ctx->pc = 0x15103cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 112));
    // 0x151040: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x151040u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x151044: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x151044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151048: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x151048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x15104c: 0x82c3c  dsll32      $a1, $t0, 16
    ctx->pc = 0x15104cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 16));
    // 0x151050: 0x3012  mflo        $a2
    ctx->pc = 0x151050u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x151054: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x151054u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x151058: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x151058u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x15105c: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x15105cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x151060: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x151060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x151064: 0x34c28000  ori         $v0, $a2, 0x8000
    ctx->pc = 0x151064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x151068: 0xa403c  dsll32      $t0, $t2, 0
    ctx->pc = 0x151068u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (32 + 0));
    // 0x15106c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151070: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x151070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151074: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x151074u;
    {
        const bool branch_taken_0x151074 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x151074) {
            ctx->pc = 0x151078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151074u;
            // 0x151078: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15107Cu;
            goto label_15107c;
        }
    }
    ctx->pc = 0x15107Cu;
label_15107c:
    // 0x15107c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15107cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x151080: 0xd6e3c  dsll32      $t5, $t5, 24
    ctx->pc = 0x151080u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
    // 0x151084: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x151084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x151088: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15108c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x15108cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x151090: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x151090u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x151094: 0x34e70006  ori         $a3, $a3, 0x6
    ctx->pc = 0x151094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6);
    // 0x151098: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x151098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x15109c: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x15109cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1510a0: 0xa533c  dsll32      $t2, $t2, 12
    ctx->pc = 0x1510a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 12));
    // 0x1510a4: 0x3c0b5000  lui         $t3, 0x5000
    ctx->pc = 0x1510a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)20480 << 16));
    // 0x1510a8: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x1510a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x1510ac: 0x12d4825  or          $t1, $t1, $t5
    ctx->pc = 0x1510acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 13));
    // 0x1510b0: 0x3084025  or          $t0, $t8, $t0
    ctx->pc = 0x1510b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 24) | GPR_U64(ctx, 8));
    // 0x1510b4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x1510b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x1510b8: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x1510b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x1510bc: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x1510bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x1510c0: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x1510c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x1510c4: 0xfdc40000  sd          $a0, 0x0($t6)
    ctx->pc = 0x1510c4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 4));
    // 0x1510c8: 0xadc5000c  sw          $a1, 0xC($t6)
    ctx->pc = 0x1510c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 5));
    // 0x1510cc: 0xfdc90020  sd          $t1, 0x20($t6)
    ctx->pc = 0x1510ccu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 9));
    // 0x1510d0: 0xfdc80040  sd          $t0, 0x40($t6)
    ctx->pc = 0x1510d0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 8));
    // 0x1510d4: 0xfdc20060  sd          $v0, 0x60($t6)
    ctx->pc = 0x1510d4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 96), GPR_U64(ctx, 2));
    // 0x1510d8: 0xfdc30070  sd          $v1, 0x70($t6)
    ctx->pc = 0x1510d8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 112), GPR_U64(ctx, 3));
    // 0x1510dc: 0x13200004  beqz        $t9, . + 4 + (0x4 << 2)
    ctx->pc = 0x1510DCu;
    {
        const bool branch_taken_0x1510dc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510DCu;
        // 0x1510e0: 0xadc6007c  sw          $a2, 0x7C($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 124), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510dc) {
            ctx->pc = 0x1510F0u;
            goto label_1510f0;
        }
    }
    ctx->pc = 0x1510E4u;
    // 0x1510e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1510e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1510e8: 0x17220007  bne         $t9, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1510E8u;
    {
        const bool branch_taken_0x1510e8 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 2));
        ctx->pc = 0x1510ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510E8u;
        // 0x1510ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510e8) {
            ctx->pc = 0x151108u;
            goto label_151108;
        }
    }
    ctx->pc = 0x1510F0u;
label_1510f0:
    // 0x1510f0: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x1510f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1510f4: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x1510f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x1510f8: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x1510f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x1510fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1510fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151100: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151100u;
    {
        const bool branch_taken_0x151100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151100u;
        // 0x151104: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151100) {
            ctx->pc = 0x151124u;
            goto label_151124;
        }
    }
    ctx->pc = 0x151108u;
label_151108:
    // 0x151108: 0x1722000a  bne         $t9, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x151108u;
    {
        const bool branch_taken_0x151108 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 2));
        ctx->pc = 0x15110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151108u;
        // 0x15110c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151108) {
            ctx->pc = 0x151134u;
            goto label_151134;
        }
    }
    ctx->pc = 0x151110u;
    // 0x151110: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x151110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151114: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x151114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x151118: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x151118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15111c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x15111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x151120: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x151120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_151124:
    // 0x151124: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x151124u;
    SET_GPR_U32(ctx, 31, 0x15112Cu);
    ctx->pc = 0x151128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151124u;
    // 0x151128: 0x24e80080  addiu       $t0, $a3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x151124u, 0x15112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15112Cu;
label_15112c:
    // 0x15112c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15112Cu;
    {
        const bool branch_taken_0x15112c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15112Cu;
        // 0x151130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15112c) {
            ctx->pc = 0x15115Cu;
            goto label_15115c;
        }
    }
    ctx->pc = 0x151134u;
label_151134:
    // 0x151134: 0x17220009  bne         $t9, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151134u;
    {
        const bool branch_taken_0x151134 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 2));
        ctx->pc = 0x151138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151134u;
        // 0x151138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151134) {
            ctx->pc = 0x15115Cu;
            goto label_15115c;
        }
    }
    ctx->pc = 0x15113Cu;
    // 0x15113c: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x15113cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151140: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x151140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x151144: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x151144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x151148: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x151148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15114c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15114cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151150: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x151150u;
    SET_GPR_U32(ctx, 31, 0x151158u);
    ctx->pc = 0x151154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151150u;
    // 0x151154: 0x24e80080  addiu       $t0, $a3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x151150u, 0x151158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151158u;
label_151158:
    // 0x151158: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x151158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15115c:
    // 0x15115c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15115cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_151160:
    // 0x151160: 0x3e00008  jr          $ra
    ctx->pc = 0x151160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151160u;
        // 0x151164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151168u;
}
