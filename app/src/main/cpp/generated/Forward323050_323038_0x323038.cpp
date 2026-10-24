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

// Function: Forward323050_323038
// Address: 0x323038 - 0x323478
void Forward323050_323038_0x323038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward323050_323038_0x323038");
#endif

    switch (ctx->pc) {
        case 0x3230a8u: goto label_3230a8;
        case 0x3230e4u: goto label_3230e4;
        case 0x323154u: goto label_323154;
        case 0x3231c0u: goto label_3231c0;
        case 0x3232a8u: goto label_3232a8;
        case 0x3232b0u: goto label_3232b0;
        case 0x3232e0u: goto label_3232e0;
        case 0x323374u: goto label_323374;
        case 0x3233ecu: goto label_3233ec;
        case 0x323400u: goto label_323400;
        case 0x32341cu: goto label_32341c;
        case 0x32342cu: goto label_32342c;
        default: break;
    }

    ctx->pc = 0x323038u;

    // 0x323038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32303c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32303cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323044: 0x80c8c14  j           func_323050
    ctx->pc = 0x323044u;
    ctx->pc = 0x323048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323044u;
    // 0x323048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323050u;
    goto label_323050;
    ctx->pc = 0x32304Cu;
    // 0x32304c: 0x0  nop
    ctx->pc = 0x32304cu;
    // NOP
label_323050:
    // 0x323050: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x323050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x323054: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x323054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x323058: 0x8c43b83c  lw          $v1, -0x47C4($v0)
    ctx->pc = 0x323058u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB83Cu));
    // 0x32305c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x323060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323064: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x323064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x323068: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x323068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32306c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x32306cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x323070: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x323070u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323074: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x323074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x323078: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x323078u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32307c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x323080: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x323080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x323084: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x323084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x323088: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x323088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x32308c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x32308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x323090: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x323090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x323094: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x323094u;
    {
        const bool branch_taken_0x323094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x323098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323094u;
        // 0x323098: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323094) {
            ctx->pc = 0x3230B0u;
            goto label_3230b0;
        }
    }
    ctx->pc = 0x32309Cu;
    // 0x32309c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32309cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3230a0: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x3230A0u;
    SET_GPR_U32(ctx, 31, 0x3230A8u);
    ctx->pc = 0x3230A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230A0u;
    // 0x3230a4: 0x248414f0  addiu       $a0, $a0, 0x14F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x3230A0u, 0x3230A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3230A8u;
label_3230a8:
    // 0x3230a8: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x3230A8u;
    {
        const bool branch_taken_0x3230a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3230ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230A8u;
        // 0x3230ac: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230a8) {
            ctx->pc = 0x323444u;
            goto label_323444;
        }
    }
    ctx->pc = 0x3230B0u;
label_3230b0:
    // 0x3230b0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3230b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3230b4: 0x8c62b838  lw          $v0, -0x47C8($v1)
    ctx->pc = 0x3230b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB838u));
    // 0x3230b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3230B8u;
    {
        const bool branch_taken_0x3230b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3230BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230B8u;
        // 0x3230bc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230b8) {
            ctx->pc = 0x3230D8u;
            goto label_3230d8;
        }
    }
    ctx->pc = 0x3230C0u;
    // 0x3230c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3230c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3230c4: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3230C4u;
    {
        const bool branch_taken_0x3230c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3230C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230C4u;
        // 0x3230c8: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230c4) {
            ctx->pc = 0x3230D8u;
            goto label_3230d8;
        }
    }
    ctx->pc = 0x3230CCu;
    // 0x3230cc: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x3230CCu;
    {
        const bool branch_taken_0x3230cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3230D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230CCu;
        // 0x3230d0: 0x8c62b840  lw          $v0, -0x47C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230cc) {
            ctx->pc = 0x323444u;
            goto label_323444;
        }
    }
    ctx->pc = 0x3230D4u;
    // 0x3230d4: 0x0  nop
    ctx->pc = 0x3230d4u;
    // NOP
label_3230d8:
    // 0x3230d8: 0x3c16003f  lui         $s6, 0x3F
    ctx->pc = 0x3230d8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
    // 0x3230dc: 0xc0c9140  jal         func_324500
    ctx->pc = 0x3230DCu;
    SET_GPR_U32(ctx, 31, 0x3230E4u);
    ctx->pc = 0x3230E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230DCu;
    // 0x3230e0: 0x8ca4b838  lw          $a0, -0x47C8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324500u, 0x3230DCu, 0x3230E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3230E4u;
label_3230e4:
    // 0x3230e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3230e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3230e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3230e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3230ec: 0x146400d5  bne         $v1, $a0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x3230ECu;
    {
        const bool branch_taken_0x3230ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3230F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230ECu;
        // 0x3230f0: 0xaec3b840  sw          $v1, -0x47C0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294948928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230ec) {
            ctx->pc = 0x323444u;
            goto label_323444;
        }
    }
    ctx->pc = 0x3230F4u;
    // 0x3230f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3230f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3230f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3230f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3230fc: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x3230fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x323100: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x323100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x323104: 0x8e10b308  lw          $s0, -0x4CF8($s0)
    ctx->pc = 0x323104u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947592)));
    // 0x323108: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x323108u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x32310c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32310Cu;
    {
        const bool branch_taken_0x32310c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x323110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32310Cu;
        // 0x323110: 0x2602011a  addiu       $v0, $s0, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32310c) {
            ctx->pc = 0x323120u;
            goto label_323120;
        }
    }
    ctx->pc = 0x323114u;
    // 0x323114: 0x26140118  addiu       $s4, $s0, 0x118
    ctx->pc = 0x323114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x323118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x323118u;
    {
        const bool branch_taken_0x323118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323118u;
        // 0x32311c: 0x261e011c  addiu       $fp, $s0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323118) {
            ctx->pc = 0x323128u;
            goto label_323128;
        }
    }
    ctx->pc = 0x323120u;
label_323120:
    // 0x323120: 0x26150118  addiu       $s5, $s0, 0x118
    ctx->pc = 0x323120u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x323124: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x323124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_323128:
    // 0x323128: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32312c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x32312Cu;
    {
        const bool branch_taken_0x32312c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32312Cu;
        // 0x323130: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32312c) {
            ctx->pc = 0x3232B8u;
            goto label_3232b8;
        }
    }
    ctx->pc = 0x323134u;
    // 0x323134: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x323134u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x323138: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x323138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x32313c: 0x26f15298  addiu       $s1, $s7, 0x5298
    ctx->pc = 0x32313cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 21144));
    // 0x323140: 0x24a51528  addiu       $a1, $a1, 0x1528
    ctx->pc = 0x323140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5416));
    // 0x323144: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x323144u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C5298u));
    // 0x323148: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x323148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32314c: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x32314Cu;
    SET_GPR_U32(ctx, 31, 0x323154u);
    ctx->pc = 0x323150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32314Cu;
    // 0x323150: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x32314Cu, 0x323154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323154u;
label_323154:
    // 0x323154: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x323154u;
    {
        const bool branch_taken_0x323154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323154u;
        // 0x323158: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323154) {
            ctx->pc = 0x323168u;
            goto label_323168;
        }
    }
    ctx->pc = 0x32315Cu;
    // 0x32315c: 0x26d0b840  addiu       $s0, $s6, -0x47C0
    ctx->pc = 0x32315cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948928));
    // 0x323160: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x323160u;
    {
        const bool branch_taken_0x323160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323160u;
        // 0x323164: 0x24841530  addiu       $a0, $a0, 0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323160) {
            ctx->pc = 0x323414u;
            goto label_323414;
        }
    }
    ctx->pc = 0x323168u;
label_323168:
    // 0x323168: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x323168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32316c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x32316cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323170: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x323170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x323174: 0x24480005  addiu       $t0, $v0, 0x5
    ctx->pc = 0x323174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x323178: 0x90450007  lbu         $a1, 0x7($v0)
    ctx->pc = 0x323178u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x32317c: 0x90430006  lbu         $v1, 0x6($v0)
    ctx->pc = 0x32317cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x323180: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x323180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x323184: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x323184u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x323188: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x323188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x32318c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x32318cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x323190: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x323190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x323194: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x323194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x323198: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x323198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x32319c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32319cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3231a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3231a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3231a4: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x3231a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3231a8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3231A8u;
    {
        const bool branch_taken_0x3231a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3231ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231A8u;
        // 0x3231ac: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231a8) {
            ctx->pc = 0x3231C8u;
            goto label_3231c8;
        }
    }
    ctx->pc = 0x3231B0u;
    // 0x3231b0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3231b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3231b4: 0x26d0b840  addiu       $s0, $s6, -0x47C0
    ctx->pc = 0x3231b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948928));
    // 0x3231b8: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x3231B8u;
    SET_GPR_U32(ctx, 31, 0x3231C0u);
    ctx->pc = 0x3231BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231B8u;
    // 0x3231bc: 0x24841568  addiu       $a0, $a0, 0x1568 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x3231B8u, 0x3231C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231C0u;
label_3231c0:
    // 0x3231c0: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x3231C0u;
    {
        const bool branch_taken_0x3231c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3231C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231C0u;
        // 0x3231c4: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231c0) {
            ctx->pc = 0x323424u;
            goto label_323424;
        }
    }
    ctx->pc = 0x3231C8u;
label_3231c8:
    // 0x3231c8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3231c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3231cc: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3231ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3231d0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3231d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3231d4: 0x8204000f  lb          $a0, 0xF($s0)
    ctx->pc = 0x3231d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x3231d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3231d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3231dc: 0x9205000f  lbu         $a1, 0xF($s0)
    ctx->pc = 0x3231dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x3231e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3231e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231e4: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x3231e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x3231e8: 0x14910005  bne         $a0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3231E8u;
    {
        const bool branch_taken_0x3231e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x3231ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231E8u;
        // 0x3231ec: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231e8) {
            ctx->pc = 0x323200u;
            goto label_323200;
        }
    }
    ctx->pc = 0x3231F0u;
    // 0x3231f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3231f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3231f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3231F4u;
    {
        const bool branch_taken_0x3231f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3231F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231F4u;
        // 0x3231f8: 0x24420120  addiu       $v0, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231f4) {
            ctx->pc = 0x323210u;
            goto label_323210;
        }
    }
    ctx->pc = 0x3231FCu;
    // 0x3231fc: 0x0  nop
    ctx->pc = 0x3231fcu;
    // NOP
label_323200:
    // 0x323200: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x323200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x323204: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x323204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x323208: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x323208u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x32320c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32320cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_323210:
    // 0x323210: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x323210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x323214: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x323214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x323218: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32321c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x32321cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x323220: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x323220u;
    {
        const bool branch_taken_0x323220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x323224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323220u;
        // 0x323224: 0x8e635298  lw          $v1, 0x5298($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323220) {
            ctx->pc = 0x323260u;
            goto label_323260;
        }
    }
    ctx->pc = 0x323228u;
    // 0x323228: 0x8e625298  lw          $v0, 0x5298($s3)
    ctx->pc = 0x323228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21144)));
    // 0x32322c: 0x90460009  lbu         $a2, 0x9($v0)
    ctx->pc = 0x32322cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x323230: 0x9045000b  lbu         $a1, 0xB($v0)
    ctx->pc = 0x323230u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x323234: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x323234u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x323238: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x323238u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x32323c: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x32323cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x323240: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x323240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x323244: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x323244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x323248: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x323248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x32324c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x32324cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x323250: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x323250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x323254: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x323254u;
    {
        const bool branch_taken_0x323254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323254u;
        // 0x323258: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323254) {
            ctx->pc = 0x32329Cu;
            goto label_32329c;
        }
    }
    ctx->pc = 0x32325Cu;
    // 0x32325c: 0x0  nop
    ctx->pc = 0x32325cu;
    // NOP
label_323260:
    // 0x323260: 0x90660009  lbu         $a2, 0x9($v1)
    ctx->pc = 0x323260u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x323264: 0x9065000b  lbu         $a1, 0xB($v1)
    ctx->pc = 0x323264u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x323268: 0x9064000a  lbu         $a0, 0xA($v1)
    ctx->pc = 0x323268u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x32326c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x32326cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x323270: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x323270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x323274: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x323274u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x323278: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x323278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32327c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x32327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x323280: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x323280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x323284: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x323284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x323288: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x323288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x32328c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x32328cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x323290: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x323290u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x323294: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x323294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x323298: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x323298u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_32329c:
    // 0x32329c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32329Cu;
    {
        const bool branch_taken_0x32329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3232A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32329Cu;
        // 0x3232a0: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32329c) {
            ctx->pc = 0x3232BCu;
            goto label_3232bc;
        }
    }
    ctx->pc = 0x3232A4u;
    // 0x3232a4: 0x0  nop
    ctx->pc = 0x3232a4u;
    // NOP
label_3232a8:
    // 0x3232a8: 0xc0c8bc6  jal         func_322F18
    ctx->pc = 0x3232A8u;
    SET_GPR_U32(ctx, 31, 0x3232B0u);
    ctx->pc = 0x3232ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3232A8u;
    // 0x3232ac: 0xaec2b840  sw          $v0, -0x47C0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294948928), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F18u, 0x3232A8u, 0x3232B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3232B0u;
label_3232b0:
    // 0x3232b0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3232B0u;
    {
        const bool branch_taken_0x3232b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3232b0) {
            ctx->pc = 0x3233C8u;
            goto label_3233c8;
        }
    }
    ctx->pc = 0x3232B8u;
label_3232b8:
    // 0x3232b8: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x3232b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
label_3232bc:
    // 0x3232bc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3232bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3232c0: 0x8c62529c  lw          $v0, 0x529C($v1)
    ctx->pc = 0x3232c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C529Cu));
    // 0x3232c4: 0x2a240  sll         $s4, $v0, 9
    ctx->pc = 0x3232c4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x3232c8: 0x234982a  slt         $s3, $s1, $s4
    ctx->pc = 0x3232c8u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3232cc: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x3232CCu;
    {
        const bool branch_taken_0x3232cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3232D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232CCu;
        // 0x3232d0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232cc) {
            ctx->pc = 0x3233D8u;
            goto label_3233d8;
        }
    }
    ctx->pc = 0x3232D4u;
    // 0x3232d4: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x3232d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
    // 0x3232d8: 0x26b2b834  addiu       $s2, $s5, -0x47CC
    ctx->pc = 0x3232d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948916));
    // 0x3232dc: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x3232dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_3232e0:
    // 0x3232e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3232e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3232e4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3232E4u;
    {
        const bool branch_taken_0x3232e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3232E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232E4u;
        // 0x3232e8: 0x8ee35298  lw          $v1, 0x5298($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232e4) {
            ctx->pc = 0x323340u;
            goto label_323340;
        }
    }
    ctx->pc = 0x3232ECu;
    // 0x3232ec: 0x8ee25298  lw          $v0, 0x5298($s7)
    ctx->pc = 0x3232ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21144)));
    // 0x3232f0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3232f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3232f4: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x3232f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3232f8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3232f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3232fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3232fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x323300: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x323300u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x323304: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x323304u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x323308: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x323308u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x32330c: 0xfe3821  addu        $a3, $a3, $fp
    ctx->pc = 0x32330cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
    // 0x323310: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x323310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x323314: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x323314u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x323318: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x323318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32331c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x32331cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x323320: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x323320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x323324: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x323324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x323328: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x323328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x32332c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32332cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x323330: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x323330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x323334: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x323334u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x323338: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x323338u;
    {
        const bool branch_taken_0x323338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323338u;
        // 0x32333c: 0xae480000  sw          $t0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323338) {
            ctx->pc = 0x3233A4u;
            goto label_3233a4;
        }
    }
    ctx->pc = 0x323340u;
label_323340:
    // 0x323340: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x323340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x323344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323348: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x323348u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x32334c: 0x90450003  lbu         $a1, 0x3($v0)
    ctx->pc = 0x32334cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x323350: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x323350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x323354: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x323354u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x323358: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x323358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32335c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x32335cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x323360: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x323360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x323364: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x323364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x323368: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x323368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x32336c: 0xc0c9216  jal         func_324858
    ctx->pc = 0x32336Cu;
    SET_GPR_U32(ctx, 31, 0x323374u);
    ctx->pc = 0x323370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32336Cu;
    // 0x323370: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324858u, 0x32336Cu, 0x323374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323374u;
label_323374:
    // 0x323374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323378: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x323378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x32337c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x32337cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x323380: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x323380u;
    {
        const bool branch_taken_0x323380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323380u;
        // 0x323384: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323380) {
            ctx->pc = 0x323408u;
            goto label_323408;
        }
    }
    ctx->pc = 0x323388u;
    // 0x323388: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x323388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32338c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32338cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323390: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x323390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x323394: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x323394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x323398: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x323398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32339c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x32339cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3233a0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3233a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3233a4:
    // 0x3233a4: 0x8d22b834  lw          $v0, -0x47CC($t1)
    ctx->pc = 0x3233a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294948916)));
    // 0x3233a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3233a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3233ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3233acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3233b0: 0x5040ffbd  beql        $v0, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x3233B0u;
    {
        const bool branch_taken_0x3233b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3233b0) {
            ctx->pc = 0x3233B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3233B0u;
            // 0x3233b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3232A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3232a8;
        }
    }
    ctx->pc = 0x3233B8u;
    // 0x3233b8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3233b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3233bc: 0x234982a  slt         $s3, $s1, $s4
    ctx->pc = 0x3233bcu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3233c0: 0x5660ffc7  bnel        $s3, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x3233C0u;
    {
        const bool branch_taken_0x3233c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3233c0) {
            ctx->pc = 0x3233C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3233C0u;
            // 0x3233c4: 0x8203000f  lb          $v1, 0xF($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3232E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3232e0;
        }
    }
    ctx->pc = 0x3233C8u;
label_3233c8:
    // 0x3233c8: 0x1660001e  bnez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x3233C8u;
    {
        const bool branch_taken_0x3233c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3233CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233C8u;
        // 0x3233cc: 0x8ec2b840  lw          $v0, -0x47C0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3233c8) {
            ctx->pc = 0x323444u;
            goto label_323444;
        }
    }
    ctx->pc = 0x3233D0u;
    // 0x3233d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3233d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3233d4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3233d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_3233d8:
    // 0x3233d8: 0x2451b838  addiu       $s1, $v0, -0x47C8
    ctx->pc = 0x3233d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948920));
    // 0x3233dc: 0x8c65529c  lw          $a1, 0x529C($v1)
    ctx->pc = 0x3233dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21148)));
    // 0x3233e0: 0x8ee65298  lw          $a2, 0x5298($s7)
    ctx->pc = 0x3233e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21144)));
    // 0x3233e4: 0xc0c8fb6  jal         func_323ED8
    ctx->pc = 0x3233E4u;
    SET_GPR_U32(ctx, 31, 0x3233ECu);
    ctx->pc = 0x3233E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3233E4u;
    // 0x3233e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323ED8u, 0x3233E4u, 0x3233ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3233ECu;
label_3233ec:
    // 0x3233ec: 0x4430012  bgezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3233ECu;
    {
        const bool branch_taken_0x3233ec = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3233ec) {
            ctx->pc = 0x3233F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3233ECu;
            // 0x3233f0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323438u;
            goto label_323438;
        }
    }
    ctx->pc = 0x3233F4u;
    // 0x3233f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3233f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3233f8: 0xc0c8bc6  jal         func_322F18
    ctx->pc = 0x3233F8u;
    SET_GPR_U32(ctx, 31, 0x323400u);
    ctx->pc = 0x3233FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3233F8u;
    // 0x3233fc: 0xaec2b840  sw          $v0, -0x47C0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294948928), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F18u, 0x3233F8u, 0x323400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323400u;
label_323400:
    // 0x323400: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x323400u;
    {
        const bool branch_taken_0x323400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323400u;
        // 0x323404: 0x8ec2b840  lw          $v0, -0x47C0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323400) {
            ctx->pc = 0x323444u;
            goto label_323444;
        }
    }
    ctx->pc = 0x323408u;
label_323408:
    // 0x323408: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x323408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32340c: 0x26d0b840  addiu       $s0, $s6, -0x47C0
    ctx->pc = 0x32340cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948928));
    // 0x323410: 0x248415a0  addiu       $a0, $a0, 0x15A0
    ctx->pc = 0x323410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
label_323414:
    // 0x323414: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x323414u;
    SET_GPR_U32(ctx, 31, 0x32341Cu);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x323414u, 0x32341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32341Cu;
label_32341c:
    // 0x32341c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323420: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_323424:
    // 0x323424: 0xc0c8bc6  jal         func_322F18
    ctx->pc = 0x323424u;
    SET_GPR_U32(ctx, 31, 0x32342Cu);
    ctx->pc = 0x322F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F18u, 0x323424u, 0x32342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32342Cu;
label_32342c:
    // 0x32342c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32342Cu;
    {
        const bool branch_taken_0x32342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32342Cu;
        // 0x323430: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32342c) {
            ctx->pc = 0x323444u;
            goto label_323444;
        }
    }
    ctx->pc = 0x323434u;
    // 0x323434: 0x0  nop
    ctx->pc = 0x323434u;
    // NOP
label_323438:
    // 0x323438: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x323438u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x32343c: 0xaec3b840  sw          $v1, -0x47C0($s6)
    ctx->pc = 0x32343cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294948928), GPR_U32(ctx, 3));
    // 0x323440: 0x8ec2b840  lw          $v0, -0x47C0($s6)
    ctx->pc = 0x323440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948928)));
label_323444:
    // 0x323444: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x323444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323448: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x323448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32344c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32344cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323450: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x323450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x323454: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x323454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323458: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x323458u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32345c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x32345cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323460: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x323460u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x323464: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x323464u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x323468: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x323468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32346c: 0x3e00008  jr          $ra
    ctx->pc = 0x32346Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32346Cu;
        // 0x323470: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32346Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323474u;
    // 0x323474: 0x0  nop
    ctx->pc = 0x323474u;
    // NOP
    ctx->pc = 0x323478u;
}
