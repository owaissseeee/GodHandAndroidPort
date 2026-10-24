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

// Function: func_0013C950
// Address: 0x13c950 - 0x13cf20
void func_0013C950_0x13c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013C950_0x13c950");
#endif

    switch (ctx->pc) {
        case 0x13cf10u: goto label_13cf10;
        default: break;
    }

    ctx->pc = 0x13c950u;

    // 0x13c950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c954: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13c954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c95c: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x13c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x13c960: 0x1040016c  beqz        $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x13C960u;
    {
        const bool branch_taken_0x13c960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C960u;
        // 0x13c964: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c960) {
            ctx->pc = 0x13CF14u;
            goto label_13cf14;
        }
    }
    ctx->pc = 0x13C968u;
    // 0x13c968: 0x8ca4009c  lw          $a0, 0x9C($a1)
    ctx->pc = 0x13c968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x13c96c: 0x10800169  beqz        $a0, . + 4 + (0x169 << 2)
    ctx->pc = 0x13C96Cu;
    {
        const bool branch_taken_0x13c96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C96Cu;
        // 0x13c970: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c96c) {
            ctx->pc = 0x13CF14u;
            goto label_13cf14;
        }
    }
    ctx->pc = 0x13C974u;
    // 0x13c974: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x13c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x13c978: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x13c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x13c97c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13c980: 0x14400164  bnez        $v0, . + 4 + (0x164 << 2)
    ctx->pc = 0x13C980u;
    {
        const bool branch_taken_0x13c980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C980u;
        // 0x13c984: 0x24677a24  addiu       $a3, $v1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c980) {
            ctx->pc = 0x13CF14u;
            goto label_13cf14;
        }
    }
    ctx->pc = 0x13C988u;
    // 0x13c988: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x13c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13c98c: 0x4400161  bltz        $v0, . + 4 + (0x161 << 2)
    ctx->pc = 0x13C98Cu;
    {
        const bool branch_taken_0x13c98c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x13c98c) {
            ctx->pc = 0x13CF14u;
            goto label_13cf14;
        }
    }
    ctx->pc = 0x13C994u;
    // 0x13c994: 0x84860548  lh          $a2, 0x548($a0)
    ctx->pc = 0x13c994u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1352)));
    // 0x13c998: 0x10c0015e  beqz        $a2, . + 4 + (0x15E << 2)
    ctx->pc = 0x13C998u;
    {
        const bool branch_taken_0x13c998 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C998u;
        // 0x13c99c: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c998) {
            ctx->pc = 0x13CF14u;
            goto label_13cf14;
        }
    }
    ctx->pc = 0x13C9A0u;
    // 0x13c9a0: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x13c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x13c9a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c9a8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C9A8u;
    {
        const bool branch_taken_0x13c9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9a8) {
            ctx->pc = 0x13C9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C9A8u;
            // 0x13c9ac: 0x8ca200a0  lw          $v0, 0xA0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C9C8u;
            goto label_13c9c8;
        }
    }
    ctx->pc = 0x13C9B0u;
    // 0x13c9b0: 0x8ca300a0  lw          $v1, 0xA0($a1)
    ctx->pc = 0x13c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x13c9b4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x13c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x13c9b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13c9bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13c9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c9c0: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x13C9C0u;
    {
        const bool branch_taken_0x13c9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9C0u;
        // 0x13c9c4: 0xaca300a0  sw          $v1, 0xA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9c0) {
            ctx->pc = 0x13CF14u;
            goto label_13cf14;
        }
    }
    ctx->pc = 0x13C9C8u;
label_13c9c8:
    // 0x13c9c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x13c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x13c9cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c9d0: 0x544000ce  bnel        $v0, $zero, . + 4 + (0xCE << 2)
    ctx->pc = 0x13C9D0u;
    {
        const bool branch_taken_0x13c9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c9d0) {
            ctx->pc = 0x13C9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C9D0u;
            // 0x13c9d4: 0x8ca2009c  lw          $v0, 0x9C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CD0Cu;
            goto label_13cd0c;
        }
    }
    ctx->pc = 0x13C9D8u;
    // 0x13c9d8: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x13c9d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x13c9dc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x13c9dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c9e0: 0x0  nop
    ctx->pc = 0x13c9e0u;
    // NOP
    // 0x13c9e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13c9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13c9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c9ec: 0x0  nop
    ctx->pc = 0x13c9ecu;
    // NOP
    // 0x13c9f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13c9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13c9f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13c9f4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x13c9f8: 0xe4a000b0  swc1        $f0, 0xB0($a1)
    ctx->pc = 0x13c9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 176), bits); }
    // 0x13c9fc: 0xe4a000ac  swc1        $f0, 0xAC($a1)
    ctx->pc = 0x13c9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 172), bits); }
    // 0x13ca00: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x13ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x13ca04: 0x2444fdb0  addiu       $a0, $v0, -0x250
    ctx->pc = 0x13ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x13ca08: 0x2c83002f  sltiu       $v1, $a0, 0x2F
    ctx->pc = 0x13ca08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x13ca0c: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x13CA0Cu;
    {
        const bool branch_taken_0x13ca0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA0Cu;
        // 0x13ca10: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca0c) {
            ctx->pc = 0x13CCF4u;
            goto label_13ccf4;
        }
    }
    ctx->pc = 0x13CA14u;
    // 0x13ca14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13ca18: 0x2442dd30  addiu       $v0, $v0, -0x22D0
    ctx->pc = 0x13ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958384));
    // 0x13ca1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ca20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13ca20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ca24: 0x800008  jr          $a0
    ctx->pc = 0x13CA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CA2Cu: goto label_13ca2c;
            case 0x13CA88u: goto label_13ca88;
            case 0x13CAE4u: goto label_13cae4;
            case 0x13CAF0u: goto label_13caf0;
            case 0x13CB4Cu: goto label_13cb4c;
            case 0x13CB58u: goto label_13cb58;
            case 0x13CBE0u: goto label_13cbe0;
            case 0x13CC70u: goto label_13cc70;
            case 0x13CCF4u: goto label_13ccf4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CA24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13CA2Cu;
label_13ca2c:
    // 0x13ca2c: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x13ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13ca30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ca34: 0x3c013e1e  lui         $at, 0x3E1E
    ctx->pc = 0x13ca34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15902 << 16));
    // 0x13ca38: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x13ca38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x13ca3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13ca3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13ca40: 0xaca200b8  sw          $v0, 0xB8($a1)
    ctx->pc = 0x13ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 2));
    // 0x13ca44: 0xe4630070  swc1        $f3, 0x70($v1)
    ctx->pc = 0x13ca44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x13ca48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13ca48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13ca4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ca4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ca50: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13ca54: 0x3c013e2f  lui         $at, 0x3E2F
    ctx->pc = 0x13ca54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15919 << 16));
    // 0x13ca58: 0x34219db2  ori         $at, $at, 0x9DB2
    ctx->pc = 0x13ca58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40370);
    // 0x13ca5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13ca5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13ca60: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x13ca60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x13ca64: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x13ca64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x13ca68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13ca68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ca6c: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13ca70: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13ca70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13ca74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ca74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ca78: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x13ca78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x13ca7c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x13ca7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13ca80: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x13CA80u;
    {
        const bool branch_taken_0x13ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA80u;
        // 0x13ca84: 0xe4420078  swc1        $f2, 0x78($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca80) {
            ctx->pc = 0x13CBB4u;
            goto label_13cbb4;
        }
    }
    ctx->pc = 0x13CA88u;
label_13ca88:
    // 0x13ca88: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x13ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13ca8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ca90: 0x3c013e1e  lui         $at, 0x3E1E
    ctx->pc = 0x13ca90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15902 << 16));
    // 0x13ca94: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x13ca94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x13ca98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13ca98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13ca9c: 0xaca200b8  sw          $v0, 0xB8($a1)
    ctx->pc = 0x13ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 2));
    // 0x13caa0: 0xe4630070  swc1        $f3, 0x70($v1)
    ctx->pc = 0x13caa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x13caa4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13caa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13caa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13caa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13caac: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cab0: 0x3c013e2f  lui         $at, 0x3E2F
    ctx->pc = 0x13cab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15919 << 16));
    // 0x13cab4: 0x34219db2  ori         $at, $at, 0x9DB2
    ctx->pc = 0x13cab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40370);
    // 0x13cab8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13cab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13cabc: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x13cabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x13cac0: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x13cac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x13cac4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13cac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13cac8: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cacc: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13caccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13cad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cad4: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x13cad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x13cad8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x13cad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13cadc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x13CADCu;
    {
        const bool branch_taken_0x13cadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CADCu;
        // 0x13cae0: 0xe4420078  swc1        $f2, 0x78($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cadc) {
            ctx->pc = 0x13CBB4u;
            goto label_13cbb4;
        }
    }
    ctx->pc = 0x13CAE4u;
label_13cae4:
    // 0x13cae4: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x13cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cae8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x13CAE8u;
    {
        const bool branch_taken_0x13cae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAE8u;
        // 0x13caec: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cae8) {
            ctx->pc = 0x13CB60u;
            goto label_13cb60;
        }
    }
    ctx->pc = 0x13CAF0u;
label_13caf0:
    // 0x13caf0: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x13caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13caf4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13caf8: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x13caf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x13cafc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x13cafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x13cb00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13cb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13cb04: 0xaca200b8  sw          $v0, 0xB8($a1)
    ctx->pc = 0x13cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 2));
    // 0x13cb08: 0xe4630070  swc1        $f3, 0x70($v1)
    ctx->pc = 0x13cb08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x13cb0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13cb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13cb10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cb14: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cb18: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x13cb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x13cb1c: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x13cb1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
    // 0x13cb20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13cb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13cb24: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x13cb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x13cb28: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x13cb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x13cb2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13cb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13cb30: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cb34: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13cb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13cb38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cb3c: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x13cb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x13cb40: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x13cb40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13cb44: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13CB44u;
    {
        const bool branch_taken_0x13cb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB44u;
        // 0x13cb48: 0xe4420078  swc1        $f2, 0x78($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb44) {
            ctx->pc = 0x13CBB4u;
            goto label_13cbb4;
        }
    }
    ctx->pc = 0x13CB4Cu;
label_13cb4c:
    // 0x13cb4c: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x13cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cb50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13CB50u;
    {
        const bool branch_taken_0x13cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB50u;
        // 0x13cb54: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb50) {
            ctx->pc = 0x13CB60u;
            goto label_13cb60;
        }
    }
    ctx->pc = 0x13CB58u;
label_13cb58:
    // 0x13cb58: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x13cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cb5c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_13cb60:
    // 0x13cb60: 0x3c013e1e  lui         $at, 0x3E1E
    ctx->pc = 0x13cb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15902 << 16));
    // 0x13cb64: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x13cb64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x13cb68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13cb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13cb6c: 0xaca200b8  sw          $v0, 0xB8($a1)
    ctx->pc = 0x13cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 2));
    // 0x13cb70: 0xe4630070  swc1        $f3, 0x70($v1)
    ctx->pc = 0x13cb70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x13cb74: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x13cb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x13cb78: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x13cb78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
    // 0x13cb7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cb80: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cb84: 0x3c013e2f  lui         $at, 0x3E2F
    ctx->pc = 0x13cb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15919 << 16));
    // 0x13cb88: 0x34219db2  ori         $at, $at, 0x9DB2
    ctx->pc = 0x13cb88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40370);
    // 0x13cb8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13cb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13cb90: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x13cb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x13cb94: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x13cb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x13cb98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13cb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13cb9c: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cba0: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x13cba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x13cba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cba8: 0xe4420078  swc1        $f2, 0x78($v0)
    ctx->pc = 0x13cba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x13cbac: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x13cbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
    // 0x13cbb0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x13cbb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_13cbb4:
    // 0x13cbb4: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cbb8: 0xe441007c  swc1        $f1, 0x7C($v0)
    ctx->pc = 0x13cbb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13cbbc: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x13cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cbc0: 0xe4630070  swc1        $f3, 0x70($v1)
    ctx->pc = 0x13cbc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x13cbc4: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x13cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cbc8: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x13cbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x13cbcc: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x13cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cbd0: 0xe4620078  swc1        $f2, 0x78($v1)
    ctx->pc = 0x13cbd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x13cbd4: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x13cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cbd8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x13CBD8u;
    {
        const bool branch_taken_0x13cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBD8u;
        // 0x13cbdc: 0xe444007c  swc1        $f4, 0x7C($v0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbd8) {
            ctx->pc = 0x13CCF4u;
            goto label_13ccf4;
        }
    }
    ctx->pc = 0x13CBE0u;
label_13cbe0:
    // 0x13cbe0: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cbe4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x13cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13cbe8: 0x3c013ecf  lui         $at, 0x3ECF
    ctx->pc = 0x13cbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16079 << 16));
    // 0x13cbec: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x13cbecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x13cbf0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13cbf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13cbf4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13cbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13cbf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cbfc: 0xe4430070  swc1        $f3, 0x70($v0)
    ctx->pc = 0x13cbfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x13cc00: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x13cc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x13cc04: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x13cc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
    // 0x13cc08: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x13cc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13cc0c: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cc10: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x13cc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x13cc14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13cc14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13cc18: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x13cc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x13cc1c: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13cc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13cc20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13cc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13cc24: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x13cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cc28: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x13cc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x13cc2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cc30: 0xe4640078  swc1        $f4, 0x78($v1)
    ctx->pc = 0x13cc30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x13cc34: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cc38: 0xe441007c  swc1        $f1, 0x7C($v0)
    ctx->pc = 0x13cc38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13cc3c: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x13cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cc40: 0xe4630070  swc1        $f3, 0x70($v1)
    ctx->pc = 0x13cc40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x13cc44: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x13cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cc48: 0xe4420074  swc1        $f2, 0x74($v0)
    ctx->pc = 0x13cc48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x13cc4c: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x13cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cc50: 0xe4640078  swc1        $f4, 0x78($v1)
    ctx->pc = 0x13cc50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x13cc54: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x13cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cc58: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13cc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13cc5c: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x13cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x13cc60: 0x10640024  beq         $v1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13CC60u;
    {
        const bool branch_taken_0x13cc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x13CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC60u;
        // 0x13cc64: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc60) {
            ctx->pc = 0x13CCF4u;
            goto label_13ccf4;
        }
    }
    ctx->pc = 0x13CC68u;
    // 0x13cc68: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x13CC68u;
    {
        const bool branch_taken_0x13cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC68u;
        // 0x13cc6c: 0xaca200b8  sw          $v0, 0xB8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc68) {
            ctx->pc = 0x13CCF4u;
            goto label_13ccf4;
        }
    }
    ctx->pc = 0x13CC70u;
label_13cc70:
    // 0x13cc70: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cc74: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x13cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13cc78: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x13cc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x13cc7c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x13cc7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x13cc80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13cc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13cc84: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x13cc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x13cc88: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x13cc88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
    // 0x13cc8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cc90: 0xe4430070  swc1        $f3, 0x70($v0)
    ctx->pc = 0x13cc90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x13cc94: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x13cc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x13cc98: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x13cc98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
    // 0x13cc9c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x13cc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13cca0: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cca4: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x13cca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x13cca8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13cca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ccac: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x13ccacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x13ccb0: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x13ccb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x13ccb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13ccb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13ccb8: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x13ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13ccbc: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x13ccbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
    // 0x13ccc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ccc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ccc4: 0xe4640078  swc1        $f4, 0x78($v1)
    ctx->pc = 0x13ccc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x13ccc8: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x13cccc: 0xe441007c  swc1        $f1, 0x7C($v0)
    ctx->pc = 0x13ccccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13ccd0: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x13ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13ccd4: 0xe4630070  swc1        $f3, 0x70($v1)
    ctx->pc = 0x13ccd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x13ccd8: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x13ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13ccdc: 0xe4420074  swc1        $f2, 0x74($v0)
    ctx->pc = 0x13ccdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x13cce0: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x13cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cce4: 0xe4640078  swc1        $f4, 0x78($v1)
    ctx->pc = 0x13cce4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x13cce8: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x13cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13ccec: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13ccf0: 0xaca400b8  sw          $a0, 0xB8($a1)
    ctx->pc = 0x13ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 4));
label_13ccf4:
    // 0x13ccf4: 0x8ca200a0  lw          $v0, 0xA0($a1)
    ctx->pc = 0x13ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x13ccf8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x13ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x13ccfc: 0xa4a000b4  sh          $zero, 0xB4($a1)
    ctx->pc = 0x13ccfcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 180), (uint16_t)GPR_U32(ctx, 0));
    // 0x13cd00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13cd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13cd04: 0xaca200a0  sw          $v0, 0xA0($a1)
    ctx->pc = 0x13cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 2));
    // 0x13cd08: 0x8ca2009c  lw          $v0, 0x9C($a1)
    ctx->pc = 0x13cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
label_13cd0c:
    // 0x13cd0c: 0xc4a200ac  lwc1        $f2, 0xAC($a1)
    ctx->pc = 0x13cd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13cd10: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x13cd10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
    // 0x13cd14: 0x8444054a  lh          $a0, 0x54A($v0)
    ctx->pc = 0x13cd14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x13cd18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13cd18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13cd1c: 0x0  nop
    ctx->pc = 0x13cd1cu;
    // NOP
    // 0x13cd20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13cd20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13cd24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13cd24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cd28: 0x0  nop
    ctx->pc = 0x13cd28u;
    // NOP
    // 0x13cd2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13cd2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13cd30: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x13cd30u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x13cd34: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x13cd34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cd38: 0x0  nop
    ctx->pc = 0x13cd38u;
    // NOP
    // 0x13cd3c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x13CD3Cu;
    {
        const bool branch_taken_0x13cd3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cd3c) {
            ctx->pc = 0x13CD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CD3Cu;
            // 0x13cd40: 0x8ca200bc  lw          $v0, 0xBC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CD50u;
            goto label_13cd50;
        }
    }
    ctx->pc = 0x13CD44u;
    // 0x13cd44: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x13cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13cd48: 0xa4a200b4  sh          $v0, 0xB4($a1)
    ctx->pc = 0x13cd48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 180), (uint16_t)GPR_U32(ctx, 2));
    // 0x13cd4c: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x13cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
label_13cd50:
    // 0x13cd50: 0xe4430040  swc1        $f3, 0x40($v0)
    ctx->pc = 0x13cd50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x13cd54: 0x94a200b4  lhu         $v0, 0xB4($a1)
    ctx->pc = 0x13cd54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x13cd58: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13CD58u;
    {
        const bool branch_taken_0x13cd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD58u;
        // 0x13cd5c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd58) {
            ctx->pc = 0x13CD90u;
            goto label_13cd90;
        }
    }
    ctx->pc = 0x13CD60u;
    // 0x13cd60: 0xc4a000a8  lwc1        $f0, 0xA8($a1)
    ctx->pc = 0x13cd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cd64: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x13cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cd68: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x13cd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x13cd6c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x13cd6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x13cd70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13cd70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13cd74: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x13cd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x13cd78: 0xc4a100a8  lwc1        $f1, 0xA8($a1)
    ctx->pc = 0x13cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cd7c: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x13cd7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x13cd80: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13cd80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13cd84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13cd84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13cd88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13CD88u;
    {
        const bool branch_taken_0x13cd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD88u;
        // 0x13cd8c: 0xe4a100a8  swc1        $f1, 0xA8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd88) {
            ctx->pc = 0x13CD94u;
            goto label_13cd94;
        }
    }
    ctx->pc = 0x13CD90u;
label_13cd90:
    // 0x13cd90: 0xa4a200b4  sh          $v0, 0xB4($a1)
    ctx->pc = 0x13cd90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 180), (uint16_t)GPR_U32(ctx, 2));
label_13cd94:
    // 0x13cd94: 0xe4a300ac  swc1        $f3, 0xAC($a1)
    ctx->pc = 0x13cd94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 172), bits); }
    // 0x13cd98: 0x8ca200c8  lw          $v0, 0xC8($a1)
    ctx->pc = 0x13cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x13cd9c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x13cd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x13cda0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13cda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13cda4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x13cda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cda8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13cda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x13cdac: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x13cdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x13cdb0: 0x8ca300c8  lw          $v1, 0xC8($a1)
    ctx->pc = 0x13cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x13cdb4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x13cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13cdb8: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x13cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cdbc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x13cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cdc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13cdc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cdc4: 0x0  nop
    ctx->pc = 0x13cdc4u;
    // NOP
    // 0x13cdc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13CDC8u;
    {
        const bool branch_taken_0x13cdc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cdc8) {
            ctx->pc = 0x13CDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CDC8u;
            // 0x13cdcc: 0xe461003c  swc1        $f1, 0x3C($v1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CDD0u;
            goto label_13cdd0;
        }
    }
    ctx->pc = 0x13CDD0u;
label_13cdd0:
    // 0x13cdd0: 0x8ca200cc  lw          $v0, 0xCC($a1)
    ctx->pc = 0x13cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x13cdd4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x13cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cdd8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13cdd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x13cddc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x13cddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x13cde0: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x13cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x13cde4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x13cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13cde8: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x13cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cdec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x13cdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cdf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13cdf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cdf4: 0x0  nop
    ctx->pc = 0x13cdf4u;
    // NOP
    // 0x13cdf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13CDF8u;
    {
        const bool branch_taken_0x13cdf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cdf8) {
            ctx->pc = 0x13CDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CDF8u;
            // 0x13cdfc: 0xe4610038  swc1        $f1, 0x38($v1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CE00u;
            goto label_13ce00;
        }
    }
    ctx->pc = 0x13CE00u;
label_13ce00:
    // 0x13ce00: 0x8ca200a0  lw          $v0, 0xA0($a1)
    ctx->pc = 0x13ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x13ce04: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x13ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x13ce08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13ce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13ce0c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13CE0Cu;
    {
        const bool branch_taken_0x13ce0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ce0c) {
            ctx->pc = 0x13CE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CE0Cu;
            // 0x13ce10: 0x8ca2009c  lw          $v0, 0x9C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CE34u;
            goto label_13ce34;
        }
    }
    ctx->pc = 0x13CE14u;
    // 0x13ce14: 0x8ca200c8  lw          $v0, 0xC8($a1)
    ctx->pc = 0x13ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x13ce18: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x13ce18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x13ce1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ce1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ce20: 0x0  nop
    ctx->pc = 0x13ce20u;
    // NOP
    // 0x13ce24: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x13ce24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x13ce28: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x13ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x13ce2c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x13ce2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x13ce30: 0x8ca2009c  lw          $v0, 0x9C($a1)
    ctx->pc = 0x13ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
label_13ce34:
    // 0x13ce34: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x13ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
    // 0x13ce38: 0x2463fdb0  addiu       $v1, $v1, -0x250
    ctx->pc = 0x13ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966704));
    // 0x13ce3c: 0x2c620016  sltiu       $v0, $v1, 0x16
    ctx->pc = 0x13ce3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x13ce40: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x13CE40u;
    {
        const bool branch_taken_0x13ce40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE40u;
        // 0x13ce44: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce40) {
            ctx->pc = 0x13CEF8u;
            goto label_13cef8;
        }
    }
    ctx->pc = 0x13CE48u;
    // 0x13ce48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13ce4c: 0x2442ddf0  addiu       $v0, $v0, -0x2210
    ctx->pc = 0x13ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958576));
    // 0x13ce50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ce54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ce58: 0x800008  jr          $a0
    ctx->pc = 0x13CE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CE60u: goto label_13ce60;
            case 0x13CEACu: goto label_13ceac;
            case 0x13CEF8u: goto label_13cef8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CE58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13CE60u;
label_13ce60:
    // 0x13ce60: 0x94a200b4  lhu         $v0, 0xB4($a1)
    ctx->pc = 0x13ce60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x13ce64: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x13ce64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ce68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ce6c: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x13ce6cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13ce70: 0xaca300b8  sw          $v1, 0xB8($a1)
    ctx->pc = 0x13ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 3));
    // 0x13ce74: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13CE74u;
    {
        const bool branch_taken_0x13ce74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ce74) {
            ctx->pc = 0x13CE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CE74u;
            // 0x13ce78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CE7Cu;
            goto label_13ce7c;
        }
    }
    ctx->pc = 0x13CE7Cu;
label_13ce7c:
    // 0x13ce7c: 0x2010  mfhi        $a0
    ctx->pc = 0x13ce7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x13ce80: 0x5480001d  bnel        $a0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x13CE80u;
    {
        const bool branch_taken_0x13ce80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ce80) {
            ctx->pc = 0x13CE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CE80u;
            // 0x13ce84: 0xaca600b8  sw          $a2, 0xB8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CEF8u;
            goto label_13cef8;
        }
    }
    ctx->pc = 0x13CE88u;
    // 0x13ce88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13ce88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13ce8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ce8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ce90: 0x0  nop
    ctx->pc = 0x13ce90u;
    // NOP
    // 0x13ce94: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x13ce94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ce98: 0x0  nop
    ctx->pc = 0x13ce98u;
    // NOP
    // 0x13ce9c: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x13CE9Cu;
    {
        const bool branch_taken_0x13ce9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ce9c) {
            ctx->pc = 0x13CEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CE9Cu;
            // 0x13cea0: 0x90a200b8  lbu         $v0, 0xB8($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CEFCu;
            goto label_13cefc;
        }
    }
    ctx->pc = 0x13CEA4u;
    // 0x13cea4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13CEA4u;
    {
        const bool branch_taken_0x13cea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEA4u;
        // 0x13cea8: 0xaca600b8  sw          $a2, 0xB8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cea4) {
            ctx->pc = 0x13CEF8u;
            goto label_13cef8;
        }
    }
    ctx->pc = 0x13CEACu;
label_13ceac:
    // 0x13ceac: 0x94a300b4  lhu         $v1, 0xB4($a1)
    ctx->pc = 0x13ceacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x13ceb0: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x13ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x13ceb4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CEB4u;
    {
        const bool branch_taken_0x13ceb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ceb4) {
            ctx->pc = 0x13CEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CEB4u;
            // 0x13ceb8: 0xc4a200ac  lwc1        $f2, 0xAC($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CEC8u;
            goto label_13cec8;
        }
    }
    ctx->pc = 0x13CEBCu;
    // 0x13cebc: 0xc4a000a8  lwc1        $f0, 0xA8($a1)
    ctx->pc = 0x13cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cec0: 0xe4a000b0  swc1        $f0, 0xB0($a1)
    ctx->pc = 0x13cec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 176), bits); }
    // 0x13cec4: 0xc4a200ac  lwc1        $f2, 0xAC($a1)
    ctx->pc = 0x13cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13cec8:
    // 0x13cec8: 0xc4a000a8  lwc1        $f0, 0xA8($a1)
    ctx->pc = 0x13cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cecc: 0xc4a100b0  lwc1        $f1, 0xB0($a1)
    ctx->pc = 0x13ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ced0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13ced0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13ced4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x13ced4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x13ced8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13ced8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13cedc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x13cedcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x13cee0: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x13cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x13cee4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13cee4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x13cee8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x13cee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x13ceec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13ceecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13cef0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x13cef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13cef4: 0xa062004f  sb          $v0, 0x4F($v1)
    ctx->pc = 0x13cef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
label_13cef8:
    // 0x13cef8: 0x90a200b8  lbu         $v0, 0xB8($a1)
    ctx->pc = 0x13cef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 184)));
label_13cefc:
    // 0x13cefc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13cefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf00: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x13cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x13cf04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13cf08: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13CF08u;
    SET_GPR_U32(ctx, 31, 0x13CF10u);
    ctx->pc = 0x13CF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF08u;
    // 0x13cf0c: 0xa062008b  sb          $v0, 0x8B($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13CF08u, 0x13CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF10u;
label_13cf10:
    // 0x13cf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cf14:
    // 0x13cf14: 0x3e00008  jr          $ra
    ctx->pc = 0x13CF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF14u;
        // 0x13cf18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CF1Cu;
    // 0x13cf1c: 0x0  nop
    ctx->pc = 0x13cf1cu;
    // NOP
    ctx->pc = 0x13cf20u;
}
