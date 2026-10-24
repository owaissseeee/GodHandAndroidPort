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

// Function: func_003288E0
// Address: 0x3288e0 - 0x328b88
void func_003288E0_0x3288e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003288E0_0x3288e0");
#endif

    switch (ctx->pc) {
        case 0x328948u: goto label_328948;
        case 0x328950u: goto label_328950;
        case 0x32895cu: goto label_32895c;
        case 0x328964u: goto label_328964;
        case 0x32898cu: goto label_32898c;
        case 0x3289a8u: goto label_3289a8;
        case 0x3289c0u: goto label_3289c0;
        case 0x328a00u: goto label_328a00;
        case 0x328a2cu: goto label_328a2c;
        case 0x328a34u: goto label_328a34;
        case 0x328a4cu: goto label_328a4c;
        case 0x328a60u: goto label_328a60;
        case 0x328ac0u: goto label_328ac0;
        case 0x328accu: goto label_328acc;
        case 0x328ae8u: goto label_328ae8;
        case 0x328afcu: goto label_328afc;
        case 0x328b18u: goto label_328b18;
        default: break;
    }

    ctx->pc = 0x3288e0u;

    // 0x3288e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3288e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3288e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3288e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3288e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3288e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3288ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3288ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3288f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3288f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3288f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3288f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3288f8: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x3288f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3288fc: 0x5440008b  bnel        $v0, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x3288FCu;
    {
        const bool branch_taken_0x3288fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3288fc) {
            ctx->pc = 0x328900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3288FCu;
            // 0x328900: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328B2Cu;
            goto label_328b2c;
        }
    }
    ctx->pc = 0x328904u;
    // 0x328904: 0x82030048  lb          $v1, 0x48($s0)
    ctx->pc = 0x328904u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x328908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32890c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32890Cu;
    {
        const bool branch_taken_0x32890c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32890c) {
            ctx->pc = 0x328910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32890Cu;
            // 0x328910: 0x82030046  lb          $v1, 0x46($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32892Cu;
            goto label_32892c;
        }
    }
    ctx->pc = 0x328914u;
    // 0x328914: 0x82020047  lb          $v0, 0x47($s0)
    ctx->pc = 0x328914u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x328918: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x328918u;
    {
        const bool branch_taken_0x328918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328918u;
        // 0x32891c: 0xa2000048  sb          $zero, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328918) {
            ctx->pc = 0x328924u;
            goto label_328924;
        }
    }
    ctx->pc = 0x328920u;
    // 0x328920: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x328920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_328924:
    // 0x328924: 0x82030046  lb          $v1, 0x46($s0)
    ctx->pc = 0x328924u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x328928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32892c:
    // 0x32892c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32892Cu;
    {
        const bool branch_taken_0x32892c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32892c) {
            ctx->pc = 0x32895Cu;
            goto label_32895c;
        }
    }
    ctx->pc = 0x328934u;
    // 0x328934: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x328934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328938: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x328938u;
    {
        const bool branch_taken_0x328938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328938) {
            ctx->pc = 0x328948u;
            goto label_328948;
        }
    }
    ctx->pc = 0x328940u;
    // 0x328940: 0xc0cc2b4  jal         func_330AD0
    ctx->pc = 0x328940u;
    SET_GPR_U32(ctx, 31, 0x328948u);
    ctx->pc = 0x328944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328940u;
    // 0x328944: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330AD0u, 0x328940u, 0x328948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328948u;
label_328948:
    // 0x328948: 0xc0ca40a  jal         func_329028
    ctx->pc = 0x328948u;
    SET_GPR_U32(ctx, 31, 0x328950u);
    ctx->pc = 0x329028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329028u, 0x328948u, 0x328950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328950u;
label_328950:
    // 0x328950: 0xa2000046  sb          $zero, 0x46($s0)
    ctx->pc = 0x328950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x328954: 0xc0ca410  jal         func_329040
    ctx->pc = 0x328954u;
    SET_GPR_U32(ctx, 31, 0x32895Cu);
    ctx->pc = 0x328958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328954u;
    // 0x328958: 0xa2000049  sb          $zero, 0x49($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x328954u, 0x32895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32895Cu;
label_32895c:
    // 0x32895c: 0xc0ca40a  jal         func_329028
    ctx->pc = 0x32895Cu;
    SET_GPR_U32(ctx, 31, 0x328964u);
    ctx->pc = 0x328960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32895Cu;
    // 0x328960: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329028u, 0x32895Cu, 0x328964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328964u;
label_328964:
    // 0x328964: 0x82040045  lb          $a0, 0x45($s0)
    ctx->pc = 0x328964u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x328968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32896c: 0x14820068  bne         $a0, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x32896Cu;
    {
        const bool branch_taken_0x32896c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x32896c) {
            ctx->pc = 0x328B10u;
            goto label_328b10;
        }
    }
    ctx->pc = 0x328974u;
    // 0x328974: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x328974u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x328978: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x328978u;
    {
        const bool branch_taken_0x328978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328978u;
        // 0x32897c: 0x92030049  lbu         $v1, 0x49($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328978) {
            ctx->pc = 0x3289DCu;
            goto label_3289dc;
        }
    }
    ctx->pc = 0x328980u;
    // 0x328980: 0xa2040049  sb          $a0, 0x49($s0)
    ctx->pc = 0x328980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x328984: 0xc0ca410  jal         func_329040
    ctx->pc = 0x328984u;
    SET_GPR_U32(ctx, 31, 0x32898Cu);
    ctx->pc = 0x328988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328984u;
    // 0x328988: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x328984u, 0x32898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32898Cu;
label_32898c:
    // 0x32898c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328990: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x328990u;
    {
        const bool branch_taken_0x328990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328990) {
            ctx->pc = 0x328994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328990u;
            // 0x328994: 0x92030049  lbu         $v1, 0x49($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3289DCu;
            goto label_3289dc;
        }
    }
    ctx->pc = 0x328998u;
    // 0x328998: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x328998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32899c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32899cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3289a0: 0xc0cc1e0  jal         func_330780
    ctx->pc = 0x3289A0u;
    SET_GPR_U32(ctx, 31, 0x3289A8u);
    ctx->pc = 0x3289A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289A0u;
    // 0x3289a4: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330780u, 0x3289A0u, 0x3289A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289A8u;
label_3289a8:
    // 0x3289a8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3289A8u;
    {
        const bool branch_taken_0x3289a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3289ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289A8u;
        // 0x3289ac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289a8) {
            ctx->pc = 0x3289D8u;
            goto label_3289d8;
        }
    }
    ctx->pc = 0x3289B0u;
    // 0x3289b0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3289b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3289b4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x3289b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3289b8: 0xc0cfc6a  jal         func_33F1A8
    ctx->pc = 0x3289B8u;
    SET_GPR_U32(ctx, 31, 0x3289C0u);
    ctx->pc = 0x3289BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289B8u;
    // 0x3289bc: 0x24841ed0  addiu       $a0, $a0, 0x1ED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F1A8u, 0x3289B8u, 0x3289C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289C0u;
label_3289c0:
    // 0x3289c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3289c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3289c4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3289c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3289c8: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x3289c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x3289cc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3289CCu;
    {
        const bool branch_taken_0x3289cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3289D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289CCu;
        // 0x3289d0: 0xa2000049  sb          $zero, 0x49($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289cc) {
            ctx->pc = 0x328B70u;
            goto label_328b70;
        }
    }
    ctx->pc = 0x3289D4u;
    // 0x3289d4: 0x0  nop
    ctx->pc = 0x3289d4u;
    // NOP
label_3289d8:
    // 0x3289d8: 0x92030049  lbu         $v1, 0x49($s0)
    ctx->pc = 0x3289d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
label_3289dc:
    // 0x3289dc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3289dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3289e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3289e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3289e4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3289e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3289e8: 0x5443004c  bnel        $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3289E8u;
    {
        const bool branch_taken_0x3289e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3289e8) {
            ctx->pc = 0x3289ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3289E8u;
            // 0x3289ec: 0x82030047  lb          $v1, 0x47($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328B1Cu;
            goto label_328b1c;
        }
    }
    ctx->pc = 0x3289F0u;
    // 0x3289f0: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3289F0u;
    {
        const bool branch_taken_0x3289f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3289f0) {
            ctx->pc = 0x3289F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3289F0u;
            // 0x3289f4: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328A04u;
            goto label_328a04;
        }
    }
    ctx->pc = 0x3289F8u;
    // 0x3289f8: 0xc0ca410  jal         func_329040
    ctx->pc = 0x3289F8u;
    SET_GPR_U32(ctx, 31, 0x328A00u);
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x3289F8u, 0x328A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A00u;
label_328a00:
    // 0x328a00: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x328a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_328a04:
    // 0x328a04: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x328a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x328a08: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x328a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x328a0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x328a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x328a10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x328a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x328a14: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x328a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x328a18: 0x10440055  beq         $v0, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x328A18u;
    {
        const bool branch_taken_0x328a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x328A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A18u;
        // 0x328a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a18) {
            ctx->pc = 0x328B70u;
            goto label_328b70;
        }
    }
    ctx->pc = 0x328A20u;
    // 0x328a20: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x328a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328a24: 0xc0cc2ec  jal         func_330BB0
    ctx->pc = 0x328A24u;
    SET_GPR_U32(ctx, 31, 0x328A2Cu);
    ctx->pc = 0x328A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A24u;
    // 0x328a28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330BB0u, 0x328A24u, 0x328A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A2Cu;
label_328a2c:
    // 0x328a2c: 0xc0cc2d2  jal         func_330B48
    ctx->pc = 0x328A2Cu;
    SET_GPR_U32(ctx, 31, 0x328A34u);
    ctx->pc = 0x328A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A2Cu;
    // 0x328a30: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330B48u, 0x328A2Cu, 0x328A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A34u;
label_328a34:
    // 0x328a34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328a38: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x328a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x328a3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328A3Cu;
    {
        const bool branch_taken_0x328a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A3Cu;
        // 0x328a40: 0x1192c0  sll         $s2, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a3c) {
            ctx->pc = 0x328A50u;
            goto label_328a50;
        }
    }
    ctx->pc = 0x328A44u;
    // 0x328a44: 0xc0cc356  jal         func_330D58
    ctx->pc = 0x328A44u;
    SET_GPR_U32(ctx, 31, 0x328A4Cu);
    ctx->pc = 0x328A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A44u;
    // 0x328a48: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330D58u, 0x328A44u, 0x328A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A4Cu;
label_328a4c:
    // 0x328a4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x328a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328a50:
    // 0x328a50: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x328a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328a54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328a58: 0xc0cc2ec  jal         func_330BB0
    ctx->pc = 0x328A58u;
    SET_GPR_U32(ctx, 31, 0x328A60u);
    ctx->pc = 0x328A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A58u;
    // 0x328a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330BB0u, 0x328A58u, 0x328A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A60u;
label_328a60:
    // 0x328a60: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x328a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x328a64: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x328a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x328a68: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x328a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x328a6c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328A6Cu;
    {
        const bool branch_taken_0x328a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x328a6c) {
            ctx->pc = 0x328A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328A6Cu;
            // 0x328a70: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328A80u;
            goto label_328a80;
        }
    }
    ctx->pc = 0x328A74u;
    // 0x328a74: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x328a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x328a78: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x328a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x328a7c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x328a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_328a80:
    // 0x328a80: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x328a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x328a84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x328A84u;
    {
        const bool branch_taken_0x328a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328a84) {
            ctx->pc = 0x328A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328A84u;
            // 0x328a88: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328A98u;
            goto label_328a98;
        }
    }
    ctx->pc = 0x328A8Cu;
    // 0x328a8c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x328a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x328a90: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x328a90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328a94: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x328a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_328a98:
    // 0x328a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328a9c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x328a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x328aa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x328AA0u;
    {
        const bool branch_taken_0x328aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AA0u;
        // 0x328aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328aa0) {
            ctx->pc = 0x328AB8u;
            goto label_328ab8;
        }
    }
    ctx->pc = 0x328AA8u;
    // 0x328aa8: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x328aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x328aac: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x328aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x328ab0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x328ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x328ab4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x328ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_328ab8:
    // 0x328ab8: 0xc0ca036  jal         func_3280D8
    ctx->pc = 0x328AB8u;
    SET_GPR_U32(ctx, 31, 0x328AC0u);
    ctx->pc = 0x328ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AB8u;
    // 0x328abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3280D8u, 0x328AB8u, 0x328AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AC0u;
label_328ac0:
    // 0x328ac0: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x328ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x328ac4: 0xc0cc33c  jal         func_330CF0
    ctx->pc = 0x328AC4u;
    SET_GPR_U32(ctx, 31, 0x328ACCu);
    ctx->pc = 0x328AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AC4u;
    // 0x328ac8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330CF0u, 0x328AC4u, 0x328ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328ACCu;
label_328acc:
    // 0x328acc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x328accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x328ad0: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x328AD0u;
    {
        const bool branch_taken_0x328ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x328ad0) {
            ctx->pc = 0x328AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328AD0u;
            // 0x328ad4: 0x82030047  lb          $v1, 0x47($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328B1Cu;
            goto label_328b1c;
        }
    }
    ctx->pc = 0x328AD8u;
    // 0x328ad8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x328ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x328adc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x328adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x328ae0: 0xc0cfc6a  jal         func_33F1A8
    ctx->pc = 0x328AE0u;
    SET_GPR_U32(ctx, 31, 0x328AE8u);
    ctx->pc = 0x328AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AE0u;
    // 0x328ae4: 0x24841f00  addiu       $a0, $a0, 0x1F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F1A8u, 0x328AE0u, 0x328AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AE8u;
label_328ae8:
    // 0x328ae8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x328ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328aec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328AECu;
    {
        const bool branch_taken_0x328aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x328AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AECu;
        // 0x328af0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328aec) {
            ctx->pc = 0x328B00u;
            goto label_328b00;
        }
    }
    ctx->pc = 0x328AF4u;
    // 0x328af4: 0xc0cc2b4  jal         func_330AD0
    ctx->pc = 0x328AF4u;
    SET_GPR_U32(ctx, 31, 0x328AFCu);
    ctx->pc = 0x328AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AF4u;
    // 0x328af8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330AD0u, 0x328AF4u, 0x328AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AFCu;
label_328afc:
    // 0x328afc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x328afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_328b00:
    // 0x328b00: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x328b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x328b04: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x328b04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x328b08: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x328B08u;
    {
        const bool branch_taken_0x328b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B08u;
        // 0x328b0c: 0xa2000049  sb          $zero, 0x49($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b08) {
            ctx->pc = 0x328B70u;
            goto label_328b70;
        }
    }
    ctx->pc = 0x328B10u;
label_328b10:
    // 0x328b10: 0xc0ca410  jal         func_329040
    ctx->pc = 0x328B10u;
    SET_GPR_U32(ctx, 31, 0x328B18u);
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x328B10u, 0x328B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B18u;
label_328b18:
    // 0x328b18: 0x82030047  lb          $v1, 0x47($s0)
    ctx->pc = 0x328b18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
label_328b1c:
    // 0x328b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328b20: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x328B20u;
    {
        const bool branch_taken_0x328b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x328b20) {
            ctx->pc = 0x328B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328B20u;
            // 0x328b24: 0xa2000047  sb          $zero, 0x47($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328B28u;
            goto label_328b28;
        }
    }
    ctx->pc = 0x328B28u;
label_328b28:
    // 0x328b28: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x328b28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_328b2c:
    // 0x328b2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x328b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328b30: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x328B30u;
    {
        const bool branch_taken_0x328b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x328b30) {
            ctx->pc = 0x328B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328B30u;
            // 0x328b34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328B74u;
            goto label_328b74;
        }
    }
    ctx->pc = 0x328B38u;
    // 0x328b38: 0x82030049  lb          $v1, 0x49($s0)
    ctx->pc = 0x328b38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x328b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328b40: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x328B40u;
    {
        const bool branch_taken_0x328b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x328b40) {
            ctx->pc = 0x328B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328B40u;
            // 0x328b44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328B74u;
            goto label_328b74;
        }
    }
    ctx->pc = 0x328B48u;
    // 0x328b48: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x328b48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x328b4c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x328B4Cu;
    {
        const bool branch_taken_0x328b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328b4c) {
            ctx->pc = 0x328B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328B4Cu;
            // 0x328b50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328B74u;
            goto label_328b74;
        }
    }
    ctx->pc = 0x328B54u;
    // 0x328b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328b5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328b60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x328b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328b64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x328b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328b68: 0x80ca12e  j           func_3284B8
    ctx->pc = 0x328B68u;
    ctx->pc = 0x328B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B68u;
    // 0x328b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3284B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3284B8u, 0x328B68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x328B70u;
label_328b70:
    // 0x328b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_328b74:
    // 0x328b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328b78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x328b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328b7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x328b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328b80: 0x3e00008  jr          $ra
    ctx->pc = 0x328B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B80u;
        // 0x328b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328B88u;
}
