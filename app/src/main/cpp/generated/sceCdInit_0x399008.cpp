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

// Function: sceCdInit
// Address: 0x399008 - 0x3992f0
void sceCdInit_0x399008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdInit_0x399008");
#endif

    switch (ctx->pc) {
        case 0x399040u: goto label_399040;
        case 0x399054u: goto label_399054;
        case 0x3990c8u: goto label_3990c8;
        case 0x3990dcu: goto label_3990dc;
        case 0x3990fcu: goto label_3990fc;
        case 0x399108u: goto label_399108;
        case 0x399144u: goto label_399144;
        case 0x399170u: goto label_399170;
        case 0x399190u: goto label_399190;
        case 0x399270u: goto label_399270;
        case 0x399278u: goto label_399278;
        case 0x3992a8u: goto label_3992a8;
        case 0x3992b0u: goto label_3992b0;
        default: break;
    }

    ctx->pc = 0x399008u;

    // 0x399008: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x399008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x39900c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x39900cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x399010: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x399010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399014: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x399014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x399018: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x399018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x39901c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399020: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x399020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x399024: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x399024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x399028: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x399028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x39902c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x39902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x399030: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x399030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x399034: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x399034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x399038: 0xc0e6390  jal         func_398E40
    ctx->pc = 0x399038u;
    SET_GPR_U32(ctx, 31, 0x399040u);
    ctx->pc = 0x39903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399038u;
    // 0x39903c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E40u, 0x399038u, 0x399040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399040u;
label_399040:
    // 0x399040: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x399040u;
    {
        const bool branch_taken_0x399040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399040u;
        // 0x399044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399040) {
            ctx->pc = 0x3992C0u;
            goto label_3992c0;
        }
    }
    ctx->pc = 0x399048u;
    // 0x399048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x399048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39904c: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x39904Cu;
    SET_GPR_U32(ctx, 31, 0x399054u);
    ctx->pc = 0x399050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39904Cu;
    // 0x399050: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x39904Cu, 0x399054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399054u;
label_399054:
    // 0x399054: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x399054u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x399058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39905c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39905cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x399060: 0xac628664  sw          $v0, -0x799C($v1)
    ctx->pc = 0x399060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F8664u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8664u, _value); } while (0);
    // 0x399064: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x399064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x399068: 0x8ea4869c  lw          $a0, -0x7964($s5)
    ctx->pc = 0x399068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936220)));
    // 0x39906c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x399070: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x399070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x399074: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x399074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x399078: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x399078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39907c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x39907cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x399080: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x399080u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x399084: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x399084u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x399088: 0xac438688  sw          $v1, -0x7978($v0)
    ctx->pc = 0x399088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F8688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8688u, _value); } while (0);
    // 0x39908c: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x39908cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x399090: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x399090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x399094: 0xaca3868c  sw          $v1, -0x7974($a1)
    ctx->pc = 0x399094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F868Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F868Cu, _value); } while (0);
    // 0x399098: 0xacc3867c  sw          $v1, -0x7984($a2)
    ctx->pc = 0x399098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F867Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F867Cu, _value); } while (0);
    // 0x39909c: 0x2451c5e8  addiu       $s1, $v0, -0x3A18
    ctx->pc = 0x39909cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952424));
    // 0x3990a0: 0xace38694  sw          $v1, -0x796C($a3)
    ctx->pc = 0x3990a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F8694u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8694u, _value); } while (0);
    // 0x3990a4: 0x2612c640  addiu       $s2, $s0, -0x39C0
    ctx->pc = 0x3990a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952512));
    // 0x3990a8: 0xad238690  sw          $v1, -0x7970($t1)
    ctx->pc = 0x3990a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F8690u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8690u, _value); } while (0);
    // 0x3990ac: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x3990acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x3990b0: 0xad008678  sw          $zero, -0x7988($t0)
    ctx->pc = 0x3990b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F8678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8678u, _value); } while (0);
    // 0x3990b4: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x3990b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x3990b8: 0xaea4869c  sw          $a0, -0x7964($s5)
    ctx->pc = 0x3990b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294936220), GPR_U32(ctx, 4));
    // 0x3990bc: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x3990bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    // 0x3990c0: 0xae838698  sw          $v1, -0x7968($s4)
    ctx->pc = 0x3990c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F8698u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8698u, _value); } while (0);
    // 0x3990c4: 0x0  nop
    ctx->pc = 0x3990c4u;
    // NOP
label_3990c8:
    // 0x3990c8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3990c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3990cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3990ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3990d0: 0x34a50592  ori         $a1, $a1, 0x592
    ctx->pc = 0x3990d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1426);
    // 0x3990d4: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x3990D4u;
    SET_GPR_U32(ctx, 31, 0x3990DCu);
    ctx->pc = 0x3990D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3990D4u;
    // 0x3990d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x3990D4u, 0x3990DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3990DCu;
label_3990dc:
    // 0x3990dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3990dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3990e0: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3990E0u;
    {
        const bool branch_taken_0x3990e0 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x3990e0) {
            ctx->pc = 0x3990E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3990E0u;
            // 0x3990e4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39912Cu;
            goto label_39912c;
        }
    }
    ctx->pc = 0x3990E8u;
    // 0x3990e8: 0x8ee28650  lw          $v0, -0x79B0($s7)
    ctx->pc = 0x3990e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936144)));
    // 0x3990ec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3990ECu;
    {
        const bool branch_taken_0x3990ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3990F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990ECu;
        // 0x3990f0: 0x8ea6869c  lw          $a2, -0x7964($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3990ec) {
            ctx->pc = 0x3990FCu;
            goto label_3990fc;
        }
    }
    ctx->pc = 0x3990F4u;
    // 0x3990f4: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3990F4u;
    SET_GPR_U32(ctx, 31, 0x3990FCu);
    ctx->pc = 0x3990F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3990F4u;
    // 0x3990f8: 0x26c4e300  addiu       $a0, $s6, -0x1D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3990F4u, 0x3990FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3990FCu;
label_3990fc:
    // 0x3990fc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3990fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x399100: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x399100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x399104: 0x0  nop
    ctx->pc = 0x399104u;
    // NOP
label_399108:
    // 0x399108: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x399108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39910c: 0x0  nop
    ctx->pc = 0x39910cu;
    // NOP
    // 0x399110: 0x0  nop
    ctx->pc = 0x399110u;
    // NOP
    // 0x399114: 0x0  nop
    ctx->pc = 0x399114u;
    // NOP
    // 0x399118: 0x0  nop
    ctx->pc = 0x399118u;
    // NOP
    // 0x39911c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39911Cu;
    {
        const bool branch_taken_0x39911c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39911c) {
            ctx->pc = 0x399108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399108;
        }
    }
    ctx->pc = 0x399124u;
    // 0x399124: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x399124u;
    {
        const bool branch_taken_0x399124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x399124) {
            ctx->pc = 0x3990C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3990c8;
        }
    }
    ctx->pc = 0x39912Cu;
label_39912c:
    // 0x39912c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x39912Cu;
    {
        const bool branch_taken_0x39912c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39912Cu;
        // 0x399130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39912c) {
            ctx->pc = 0x399184u;
            goto label_399184;
        }
    }
    ctx->pc = 0x399134u;
    // 0x399134: 0xae13c640  sw          $s3, -0x39C0($s0)
    ctx->pc = 0x399134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952512), GPR_U32(ctx, 19));
    // 0x399138: 0xae808698  sw          $zero, -0x7968($s4)
    ctx->pc = 0x399138u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294936216), GPR_U32(ctx, 0));
    // 0x39913c: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x39913Cu;
    SET_GPR_U32(ctx, 31, 0x399144u);
    ctx->pc = 0x399140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39913Cu;
    // 0x399140: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x39913Cu, 0x399144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399144u;
label_399144:
    // 0x399144: 0x27d09840  addiu       $s0, $fp, -0x67C0
    ctx->pc = 0x399144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294940736));
    // 0x399148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39914c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x39914cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399150: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x399150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x399154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x399154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39915c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x39915cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399160: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x399160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399164: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x399164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x399168: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x399168u;
    SET_GPR_U32(ctx, 31, 0x399170u);
    ctx->pc = 0x39916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399168u;
    // 0x39916c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x399168u, 0x399170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399170u;
label_399170:
    // 0x399170: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x399170u;
    {
        const bool branch_taken_0x399170 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x399174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399170u;
        // 0x399174: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399170) {
            ctx->pc = 0x3991B4u;
            goto label_3991b4;
        }
    }
    ctx->pc = 0x399178u;
    // 0x399178: 0xac408664  sw          $zero, -0x799C($v0)
    ctx->pc = 0x399178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936164), GPR_U32(ctx, 0));
    // 0x39917c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x39917Cu;
    {
        const bool branch_taken_0x39917c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39917Cu;
        // 0x399180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39917c) {
            ctx->pc = 0x3992C0u;
            goto label_3992c0;
        }
    }
    ctx->pc = 0x399184u;
label_399184:
    // 0x399184: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x399184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x399188: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x399188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39918c: 0x0  nop
    ctx->pc = 0x39918cu;
    // NOP
label_399190:
    // 0x399190: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x399190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x399194: 0x0  nop
    ctx->pc = 0x399194u;
    // NOP
    // 0x399198: 0x0  nop
    ctx->pc = 0x399198u;
    // NOP
    // 0x39919c: 0x0  nop
    ctx->pc = 0x39919cu;
    // NOP
    // 0x3991a0: 0x0  nop
    ctx->pc = 0x3991a0u;
    // NOP
    // 0x3991a4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3991A4u;
    {
        const bool branch_taken_0x3991a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3991a4) {
            ctx->pc = 0x399190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399190;
        }
    }
    ctx->pc = 0x3991ACu;
    // 0x3991ac: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x3991ACu;
    {
        const bool branch_taken_0x3991ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3991ac) {
            ctx->pc = 0x3990C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3990c8;
        }
    }
    ctx->pc = 0x3991B4u;
label_3991b4:
    // 0x3991b4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x3991b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x3991b8: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x3991b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3991bc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3991bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3991c0: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x3991c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3991c4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3991c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3991c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3991c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3991cc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3991ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3991d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3991d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3991d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3991d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3991d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3991d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3991dc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3991dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3991e0: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3991E0u;
    {
        const bool branch_taken_0x3991e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3991E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991E0u;
        // 0x3991e4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3991e0) {
            ctx->pc = 0x39923Cu;
            goto label_39923c;
        }
    }
    ctx->pc = 0x3991E8u;
    // 0x3991e8: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x3991e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x3991ec: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3991ECu;
    {
        const bool branch_taken_0x3991ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3991F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991ECu;
        // 0x3991f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3991ec) {
            ctx->pc = 0x399200u;
            goto label_399200;
        }
    }
    ctx->pc = 0x3991F4u;
    // 0x3991f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3991f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3991f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3991F8u;
    {
        const bool branch_taken_0x3991f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3991FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991F8u;
        // 0x3991fc: 0xac508650  sw          $s0, -0x79B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936144), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3991f8) {
            ctx->pc = 0x39923Cu;
            goto label_39923c;
        }
    }
    ctx->pc = 0x399200u;
label_399200:
    // 0x399200: 0x24a200ff  addiu       $v0, $a1, 0xFF
    ctx->pc = 0x399200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x399204: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x399204u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x399208: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x399208u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x39920c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x39920cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x399210: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x399210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x399214: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x399214u;
    {
        const bool branch_taken_0x399214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399214) {
            ctx->pc = 0x399218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399214u;
            // 0x399218: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39923Cu;
            goto label_39923c;
        }
    }
    ctx->pc = 0x39921Cu;
    // 0x39921c: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x39921cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x399220: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x399220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x399224: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x399224u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x399228: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x399228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x39922c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x39922cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x399230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x399230u;
    {
        const bool branch_taken_0x399230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399230u;
        // 0x399234: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399230) {
            ctx->pc = 0x399240u;
            goto label_399240;
        }
    }
    ctx->pc = 0x399238u;
    // 0x399238: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x399238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39923c:
    // 0x39923c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39923cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_399240:
    // 0x399240: 0xac608664  sw          $zero, -0x799C($v1)
    ctx->pc = 0x399240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936164), GPR_U32(ctx, 0));
    // 0x399244: 0x6600016  bltz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x399244u;
    {
        const bool branch_taken_0x399244 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x399248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399244u;
        // 0x399248: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x399244) {
            ctx->pc = 0x3992A0u;
            goto label_3992a0;
        }
    }
    ctx->pc = 0x39924Cu;
    // 0x39924c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x39924Cu;
    {
        const bool branch_taken_0x39924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39924Cu;
        // 0x399250: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39924c) {
            ctx->pc = 0x3992A0u;
            goto label_3992a0;
        }
    }
    ctx->pc = 0x399254u;
    // 0x399254: 0x16620012  bne         $s3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x399254u;
    {
        const bool branch_taken_0x399254 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x399258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399254u;
        // 0x399258: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399254) {
            ctx->pc = 0x3992A0u;
            goto label_3992a0;
        }
    }
    ctx->pc = 0x39925Cu;
    // 0x39925c: 0x8c438650  lw          $v1, -0x79B0($v0)
    ctx->pc = 0x39925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936144)));
    // 0x399260: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x399260u;
    {
        const bool branch_taken_0x399260 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x399264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399260u;
        // 0x399264: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399260) {
            ctx->pc = 0x399270u;
            goto label_399270;
        }
    }
    ctx->pc = 0x399268u;
    // 0x399268: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x399268u;
    SET_GPR_U32(ctx, 31, 0x399270u);
    ctx->pc = 0x39926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399268u;
    // 0x39926c: 0x2484e320  addiu       $a0, $a0, -0x1CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x399268u, 0x399270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399270u;
label_399270:
    // 0x399270: 0xc0e61c8  jal         func_398720
    ctx->pc = 0x399270u;
    SET_GPR_U32(ctx, 31, 0x399278u);
    ctx->pc = 0x398720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398720u, 0x399270u, 0x399278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399278u;
label_399278:
    // 0x399278: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x399278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39927c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x399280: 0xac448668  sw          $a0, -0x7998($v0)
    ctx->pc = 0x399280u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3F8668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8668u, _value); } while (0);
    // 0x399284: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x399284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x399288: 0xac64866c  sw          $a0, -0x7994($v1)
    ctx->pc = 0x399288u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3F866Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F866Cu, _value); } while (0);
    // 0x39928c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39928cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x399290: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x399290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x399294: 0xac448660  sw          $a0, -0x79A0($v0)
    ctx->pc = 0x399294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3F8660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8660u, _value); } while (0);
    // 0x399298: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x399298u;
    {
        const bool branch_taken_0x399298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399298u;
        // 0x39929c: 0xac608684  sw          $zero, -0x797C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399298) {
            ctx->pc = 0x3992BCu;
            goto label_3992bc;
        }
    }
    ctx->pc = 0x3992A0u;
label_3992a0:
    // 0x3992a0: 0xc0e618e  jal         func_398638
    ctx->pc = 0x3992A0u;
    SET_GPR_U32(ctx, 31, 0x3992A8u);
    ctx->pc = 0x398638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398638u, 0x3992A0u, 0x3992A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992A8u;
label_3992a8:
    // 0x3992a8: 0xc0e6206  jal         func_398818
    ctx->pc = 0x3992A8u;
    SET_GPR_U32(ctx, 31, 0x3992B0u);
    ctx->pc = 0x398818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398818u, 0x3992A8u, 0x3992B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3992B0u;
label_3992b0:
    // 0x3992b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3992b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3992b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3992b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3992b8: 0xac628684  sw          $v0, -0x797C($v1)
    ctx->pc = 0x3992b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F8684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8684u, _value); } while (0);
label_3992bc:
    // 0x3992bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3992bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3992c0:
    // 0x3992c0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3992c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3992c4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x3992c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3992c8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x3992c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3992cc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x3992ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3992d0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x3992d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3992d4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3992d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3992d8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x3992d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3992dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3992dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3992e0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3992e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3992e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3992e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3992e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3992E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992E8u;
        // 0x3992ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3992E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3992F0u;
}
