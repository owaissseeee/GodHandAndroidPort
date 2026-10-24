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

// Function: _IO_file_xsputn
// Address: 0x393368 - 0x393540
void ps2__IO_file_xsputn_0x393368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_file_xsputn_0x393368");
#endif

    switch (ctx->pc) {
        case 0x3933f0u: goto label_3933f0;
        case 0x39343cu: goto label_39343c;
        case 0x393450u: goto label_393450;
        case 0x39349cu: goto label_39349c;
        case 0x3934e8u: goto label_3934e8;
        case 0x39350cu: goto label_39350c;
        default: break;
    }

    ctx->pc = 0x393368u;

    // 0x393368: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x393368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x39336c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x39336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x393370: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x393370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x393374: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x393374u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393378: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x393378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x39337c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39337cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393380: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x393380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x393384: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x393384u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393388: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x393388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x39338c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x39338cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393390: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x393390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x393394: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x393394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393398: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x393398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x39339c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x39339cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3933a0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3933A0u;
    {
        const bool branch_taken_0x3933a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3933A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933A0u;
        // 0x3933a4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933a0) {
            ctx->pc = 0x3933B0u;
            goto label_3933b0;
        }
    }
    ctx->pc = 0x3933A8u;
    // 0x3933a8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3933A8u;
    {
        const bool branch_taken_0x3933a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3933ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933A8u;
        // 0x3933ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933a8) {
            ctx->pc = 0x393514u;
            goto label_393514;
        }
    }
    ctx->pc = 0x3933B0u;
label_3933b0:
    // 0x3933b0: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x3933b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3933b4: 0x24040a00  addiu       $a0, $zero, 0xA00
    ctx->pc = 0x3933b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x3933b8: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x3933b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x3933bc: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x3933bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3933c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3933c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3933c4: 0x30420a00  andi        $v0, $v0, 0xA00
    ctx->pc = 0x3933c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2560);
    // 0x3933c8: 0x14440011  bne         $v0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3933C8u;
    {
        const bool branch_taken_0x3933c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3933CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933C8u;
        // 0x3933cc: 0x658023  subu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933c8) {
            ctx->pc = 0x393410u;
            goto label_393410;
        }
    }
    ctx->pc = 0x3933D0u;
    // 0x3933d0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3933d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3933d4: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x3933d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3933d8: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x3933d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3933dc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3933DCu;
    {
        const bool branch_taken_0x3933dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3933E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933DCu;
        // 0x3933e0: 0x2b41821  addu        $v1, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933dc) {
            ctx->pc = 0x393410u;
            goto label_393410;
        }
    }
    ctx->pc = 0x3933E4u;
    // 0x3933e4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3933e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3933e8: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x3933e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3933ec: 0x0  nop
    ctx->pc = 0x3933ecu;
    // NOP
label_3933f0:
    // 0x3933f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3933F0u;
    {
        const bool branch_taken_0x3933f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3933F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933F0u;
        // 0x3933f4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933f0) {
            ctx->pc = 0x393410u;
            goto label_393410;
        }
    }
    ctx->pc = 0x3933F8u;
    // 0x3933f8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3933f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3933fc: 0x1444fffc  bne         $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3933FCu;
    {
        const bool branch_taken_0x3933fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x393400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933FCu;
        // 0x393400: 0x223102b  sltu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933fc) {
            ctx->pc = 0x3933F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3933f0;
        }
    }
    ctx->pc = 0x393404u;
    // 0x393404: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x393404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x393408: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x393408u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39340c: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x39340cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_393410:
    // 0x393410: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x393410u;
    {
        const bool branch_taken_0x393410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x393414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393410u;
        // 0x393414: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393410) {
            ctx->pc = 0x393484u;
            goto label_393484;
        }
    }
    ctx->pc = 0x393418u;
    // 0x393418: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x393418u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    // 0x39341c: 0x2e030015  sltiu       $v1, $s0, 0x15
    ctx->pc = 0x39341cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x393420: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x393420u;
    {
        const bool branch_taken_0x393420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x393424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393420u;
        // 0x393424: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393420) {
            ctx->pc = 0x393444u;
            goto label_393444;
        }
    }
    ctx->pc = 0x393428u;
    // 0x393428: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x393428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39342c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39342cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393430: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x393430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393434: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x393434u;
    SET_GPR_U32(ctx, 31, 0x39343Cu);
    ctx->pc = 0x393438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393434u;
    // 0x393438: 0x230a821  addu        $s5, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x393434u, 0x39343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39343Cu;
label_39343c:
    // 0x39343c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39343Cu;
    {
        const bool branch_taken_0x39343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39343Cu;
        // 0x393440: 0x8e650014  lw          $a1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39343c) {
            ctx->pc = 0x393474u;
            goto label_393474;
        }
    }
    ctx->pc = 0x393444u;
label_393444:
    // 0x393444: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x393444u;
    {
        const bool branch_taken_0x393444 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x393448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393444u;
        // 0x393448: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393444) {
            ctx->pc = 0x393474u;
            goto label_393474;
        }
    }
    ctx->pc = 0x39344Cu;
    // 0x39344c: 0x2903023  subu        $a2, $s4, $s0
    ctx->pc = 0x39344cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_393450:
    // 0x393450: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x393450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x393454: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x393454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x393458: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x393458u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x39345c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x39345cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x393460: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x393460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x393464: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x393464u;
    {
        const bool branch_taken_0x393464 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x393464) {
            ctx->pc = 0x393450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393450;
        }
    }
    ctx->pc = 0x39346Cu;
    // 0x39346c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39346Cu;
    {
        const bool branch_taken_0x39346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39346Cu;
        // 0x393470: 0x8e650014  lw          $a1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39346c) {
            ctx->pc = 0x393478u;
            goto label_393478;
        }
    }
    ctx->pc = 0x393474u;
label_393474:
    // 0x393474: 0x2903023  subu        $a2, $s4, $s0
    ctx->pc = 0x393474u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_393478:
    // 0x393478: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x393478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x39347c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39347cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393480: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x393480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_393484:
    // 0x393484: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x393484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x393488: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x393488u;
    {
        const bool branch_taken_0x393488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393488u;
        // 0x39348c: 0x2921023  subu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393488) {
            ctx->pc = 0x393514u;
            goto label_393514;
        }
    }
    ctx->pc = 0x393490u;
    // 0x393490: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x393490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393494: 0xc0e30fc  jal         func_38C3F0
    ctx->pc = 0x393494u;
    SET_GPR_U32(ctx, 31, 0x39349Cu);
    ctx->pc = 0x393498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393494u;
    // 0x393498: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3F0u, 0x393494u, 0x39349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39349Cu;
label_39349c:
    // 0x39349c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39349cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3934a0: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3934A0u;
    {
        const bool branch_taken_0x3934a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3934A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934A0u;
        // 0x3934a4: 0x2921023  subu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934a0) {
            ctx->pc = 0x393514u;
            goto label_393514;
        }
    }
    ctx->pc = 0x3934A8u;
    // 0x3934a8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3934a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3934ac: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x3934acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3934b0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x3934b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3934b4: 0x2c640080  sltiu       $a0, $v1, 0x80
    ctx->pc = 0x3934b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x3934b8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3934B8u;
    {
        const bool branch_taken_0x3934b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3934BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934B8u;
        // 0x3934bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934b8) {
            ctx->pc = 0x3934D4u;
            goto label_3934d4;
        }
    }
    ctx->pc = 0x3934C0u;
    // 0x3934c0: 0x243001b  divu        $zero, $s2, $v1
    ctx->pc = 0x3934c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x3934c4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3934C4u;
    {
        const bool branch_taken_0x3934c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3934c4) {
            ctx->pc = 0x3934C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3934C4u;
            // 0x3934c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3934CCu;
            goto label_3934cc;
        }
    }
    ctx->pc = 0x3934CCu;
label_3934cc:
    // 0x3934cc: 0x1010  mfhi        $v0
    ctx->pc = 0x3934ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3934d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3934d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3934d4:
    // 0x3934d4: 0x2518023  subu        $s0, $s2, $s1
    ctx->pc = 0x3934d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3934d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3934d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3934dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3934dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3934e0: 0xc0e4aa0  jal         func_392A80
    ctx->pc = 0x3934E0u;
    SET_GPR_U32(ctx, 31, 0x3934E8u);
    ctx->pc = 0x3934E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3934E0u;
    // 0x3934e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392A80u, 0x3934E0u, 0x3934E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3934E8u;
label_3934e8:
    // 0x3934e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3934e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3934ec: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3934ECu;
    {
        const bool branch_taken_0x3934ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3934F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934ECu;
        // 0x3934f0: 0x2921023  subu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934ec) {
            ctx->pc = 0x393514u;
            goto label_393514;
        }
    }
    ctx->pc = 0x3934F4u;
    // 0x3934f4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3934f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3934f8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3934F8u;
    {
        const bool branch_taken_0x3934f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3934FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934F8u;
        // 0x3934fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934f8) {
            ctx->pc = 0x393510u;
            goto label_393510;
        }
    }
    ctx->pc = 0x393500u;
    // 0x393500: 0x2b02821  addu        $a1, $s5, $s0
    ctx->pc = 0x393500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x393504: 0xc0e322c  jal         func_38C8B0
    ctx->pc = 0x393504u;
    SET_GPR_U32(ctx, 31, 0x39350Cu);
    ctx->pc = 0x393508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393504u;
    // 0x393508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C8B0u, 0x393504u, 0x39350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39350Cu;
label_39350c:
    // 0x39350c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x39350cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_393510:
    // 0x393510: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x393510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_393514:
    // 0x393514: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x393514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x393518: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x393518u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39351c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x39351cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x393520: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x393520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x393524: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x393524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x393528: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x393528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39352c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39352cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x393530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393534: 0x3e00008  jr          $ra
    ctx->pc = 0x393534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393534u;
        // 0x393538: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39353Cu;
    // 0x39353c: 0x0  nop
    ctx->pc = 0x39353cu;
    // NOP
    ctx->pc = 0x393540u;
}
