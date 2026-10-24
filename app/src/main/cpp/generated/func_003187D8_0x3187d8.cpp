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

// Function: func_003187D8
// Address: 0x3187d8 - 0x318b58
void func_003187D8_0x3187d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003187D8_0x3187d8");
#endif

    switch (ctx->pc) {
        case 0x31882cu: goto label_31882c;
        case 0x31884cu: goto label_31884c;
        case 0x318860u: goto label_318860;
        case 0x318880u: goto label_318880;
        case 0x3188b0u: goto label_3188b0;
        case 0x3188dcu: goto label_3188dc;
        case 0x318964u: goto label_318964;
        case 0x318980u: goto label_318980;
        case 0x318990u: goto label_318990;
        case 0x3189fcu: goto label_3189fc;
        case 0x318a64u: goto label_318a64;
        case 0x318aa8u: goto label_318aa8;
        case 0x318aecu: goto label_318aec;
        default: break;
    }

    ctx->pc = 0x3187d8u;

    // 0x3187d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3187d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3187dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3187dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3187e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3187e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3187e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3187e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3187e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3187e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3187ec: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3187ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3187f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3187f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3187f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3187f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3187f8: 0xa220032d  sb          $zero, 0x32D($s1)
    ctx->pc = 0x3187f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 813), (uint8_t)GPR_U32(ctx, 0));
    // 0x3187fc: 0x8e2202f0  lw          $v0, 0x2F0($s1)
    ctx->pc = 0x3187fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x318800: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x318800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x318804: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x318804u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x318808: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x318808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x31880c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x31880cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x318810: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x318810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x318814: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x318814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x318818: 0xa6230330  sh          $v1, 0x330($s1)
    ctx->pc = 0x318818u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 816), (uint16_t)GPR_U32(ctx, 3));
    // 0x31881c: 0xa226032c  sb          $a2, 0x32C($s1)
    ctx->pc = 0x31881cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 812), (uint8_t)GPR_U32(ctx, 6));
    // 0x318820: 0xa227032e  sb          $a3, 0x32E($s1)
    ctx->pc = 0x318820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 814), (uint8_t)GPR_U32(ctx, 7));
    // 0x318824: 0xc0c6730  jal         func_319CC0
    ctx->pc = 0x318824u;
    SET_GPR_U32(ctx, 31, 0x31882Cu);
    ctx->pc = 0x318828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318824u;
    // 0x318828: 0xae2202f0  sw          $v0, 0x2F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319CC0u, 0x318824u, 0x31882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31882Cu;
label_31882c:
    // 0x31882c: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x31882cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x318830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x318830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318834: 0x261074a0  addiu       $s0, $s0, 0x74A0
    ctx->pc = 0x318834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    // 0x318838: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x318838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31883c: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x31883cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x318840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x318844: 0xc0c6730  jal         func_319CC0
    ctx->pc = 0x318844u;
    SET_GPR_U32(ctx, 31, 0x31884Cu);
    ctx->pc = 0x318848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318844u;
    // 0x318848: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319CC0u, 0x318844u, 0x31884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31884Cu;
label_31884c:
    // 0x31884c: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x31884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x318850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x318850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318858: 0xc0c6780  jal         func_319E00
    ctx->pc = 0x318858u;
    SET_GPR_U32(ctx, 31, 0x318860u);
    ctx->pc = 0x31885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318858u;
    // 0x31885c: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319E00u, 0x318858u, 0x318860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318860u;
label_318860:
    // 0x318860: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x318860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x318864: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x318864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x318868: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x318868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x31886c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x31886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x318870: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318870u;
    {
        const bool branch_taken_0x318870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318870u;
        // 0x318874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318870) {
            ctx->pc = 0x318880u;
            goto label_318880;
        }
    }
    ctx->pc = 0x318878u;
    // 0x318878: 0xc0c74be  jal         func_31D2F8
    ctx->pc = 0x318878u;
    SET_GPR_U32(ctx, 31, 0x318880u);
    ctx->pc = 0x31887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318878u;
    // 0x31887c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D2F8u, 0x318878u, 0x318880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318880u;
label_318880:
    // 0x318880: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x318880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x318884: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x318884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x318888: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x318888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x31888c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x31888cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x318890: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x318890u;
    {
        const bool branch_taken_0x318890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318890u;
        // 0x318894: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318890) {
            ctx->pc = 0x3188BCu;
            goto label_3188bc;
        }
    }
    ctx->pc = 0x318898u;
    // 0x318898: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x318898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x31889c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3188a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3188a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3188a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3188a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3188a8: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x3188A8u;
    SET_GPR_U32(ctx, 31, 0x3188B0u);
    ctx->pc = 0x3188ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3188A8u;
    // 0x3188ac: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x3188A8u, 0x3188B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188B0u;
label_3188b0:
    // 0x3188b0: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x3188b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x3188b4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3188b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3188b8: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x3188b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
label_3188bc:
    // 0x3188bc: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x3188bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x3188c0: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x3188c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x3188c4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3188c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x3188c8: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3188C8u;
    {
        const bool branch_taken_0x3188c8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3188c8) {
            ctx->pc = 0x3188CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3188C8u;
            // 0x3188cc: 0x8e220320  lw          $v0, 0x320($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3188F4u;
            goto label_3188f4;
        }
    }
    ctx->pc = 0x3188D0u;
    // 0x3188d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3188d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3188d4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x3188D4u;
    SET_GPR_U32(ctx, 31, 0x3188DCu);
    ctx->pc = 0x3188D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3188D4u;
    // 0x3188d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x3188D4u, 0x3188DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188DCu;
label_3188dc:
    // 0x3188dc: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x3188dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x3188e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3188e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3188e4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3188e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3188e8: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x3188e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x3188ec: 0xae2402c4  sw          $a0, 0x2C4($s1)
    ctx->pc = 0x3188ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 4));
    // 0x3188f0: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x3188f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_3188f4:
    // 0x3188f4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x3188f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x3188f8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x3188f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x3188fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3188fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x318900: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x318900u;
    {
        const bool branch_taken_0x318900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318900u;
        // 0x318904: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318900) {
            ctx->pc = 0x31891Cu;
            goto label_31891c;
        }
    }
    ctx->pc = 0x318908u;
    // 0x318908: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x318908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31890c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31890cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318910: 0xae2202c0  sw          $v0, 0x2C0($s1)
    ctx->pc = 0x318910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 2));
    // 0x318914: 0xa62302ac  sh          $v1, 0x2AC($s1)
    ctx->pc = 0x318914u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 684), (uint16_t)GPR_U32(ctx, 3));
    // 0x318918: 0xae2402c4  sw          $a0, 0x2C4($s1)
    ctx->pc = 0x318918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 4));
label_31891c:
    // 0x31891c: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x31891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x318920: 0x90620035  lbu         $v0, 0x35($v1)
    ctx->pc = 0x318920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 53)));
    // 0x318924: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x318924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x318928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x318928u;
    {
        const bool branch_taken_0x318928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318928u;
        // 0x31892c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318928) {
            ctx->pc = 0x318940u;
            goto label_318940;
        }
    }
    ctx->pc = 0x318930u;
    // 0x318930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318934: 0xa62302ac  sh          $v1, 0x2AC($s1)
    ctx->pc = 0x318934u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 684), (uint16_t)GPR_U32(ctx, 3));
    // 0x318938: 0xae2202c4  sw          $v0, 0x2C4($s1)
    ctx->pc = 0x318938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 2));
    // 0x31893c: 0xae2302c0  sw          $v1, 0x2C0($s1)
    ctx->pc = 0x31893cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 3));
label_318940:
    // 0x318940: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x318940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x318944: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x318944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x318948: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x318948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x31894c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x31894cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x318950: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x318950u;
    {
        const bool branch_taken_0x318950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318950) {
            ctx->pc = 0x318978u;
            goto label_318978;
        }
    }
    ctx->pc = 0x318958u;
    // 0x318958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x318958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31895c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x31895Cu;
    SET_GPR_U32(ctx, 31, 0x318964u);
    ctx->pc = 0x318960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31895Cu;
    // 0x318960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x31895Cu, 0x318964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318964u;
label_318964:
    // 0x318964: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x318964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x318968: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x318968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x31896c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x31896cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x318970: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x318970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x318974: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x318974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_318978:
    // 0x318978: 0xc055922  jal         func_156488
    ctx->pc = 0x318978u;
    SET_GPR_U32(ctx, 31, 0x318980u);
    ctx->pc = 0x31897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318978u;
    // 0x31897c: 0x9444003e  lhu         $a0, 0x3E($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156488u, 0x318978u, 0x318980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318980u;
label_318980:
    // 0x318980: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x318980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x318984: 0xe6200324  swc1        $f0, 0x324($s1)
    ctx->pc = 0x318984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 804), bits); }
    // 0x318988: 0xc055922  jal         func_156488
    ctx->pc = 0x318988u;
    SET_GPR_U32(ctx, 31, 0x318990u);
    ctx->pc = 0x31898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318988u;
    // 0x31898c: 0x94440040  lhu         $a0, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156488u, 0x318988u, 0x318990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318990u;
label_318990:
    // 0x318990: 0x8e240254  lw          $a0, 0x254($s1)
    ctx->pc = 0x318990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x318994: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x318994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x318998: 0xe6200328  swc1        $f0, 0x328($s1)
    ctx->pc = 0x318998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 808), bits); }
    // 0x31899c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x31899cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3189a0: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x3189a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x3189a4: 0x8e260320  lw          $a2, 0x320($s1)
    ctx->pc = 0x3189a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x3189a8: 0xae240254  sw          $a0, 0x254($s1)
    ctx->pc = 0x3189a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 4));
    // 0x3189ac: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3189acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x3189b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3189b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3189b4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3189b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3189b8: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x3189b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3189bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3189bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3189c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3189c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3189c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3189c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3189c8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3189c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3189cc: 0xa62202ae  sh          $v0, 0x2AE($s1)
    ctx->pc = 0x3189ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 686), (uint16_t)GPR_U32(ctx, 2));
    // 0x3189d0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3189d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3189d4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3189D4u;
    {
        const bool branch_taken_0x3189d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3189d4) {
            ctx->pc = 0x3189D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3189D4u;
            // 0x3189d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3189DCu;
            goto label_3189dc;
        }
    }
    ctx->pc = 0x3189DCu;
label_3189dc:
    // 0x3189dc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3189dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3189e0: 0xae240254  sw          $a0, 0x254($s1)
    ctx->pc = 0x3189e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 4));
    // 0x3189e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3189e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3189e8: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x3189e8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3189ec: 0x1012  mflo        $v0
    ctx->pc = 0x3189ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3189f0: 0xa22202b0  sb          $v0, 0x2B0($s1)
    ctx->pc = 0x3189f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 688), (uint8_t)GPR_U32(ctx, 2));
    // 0x3189f4: 0xc055922  jal         func_156488
    ctx->pc = 0x3189F4u;
    SET_GPR_U32(ctx, 31, 0x3189FCu);
    ctx->pc = 0x3189F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3189F4u;
    // 0x3189f8: 0x94c40048  lhu         $a0, 0x48($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156488u, 0x3189F4u, 0x3189FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3189FCu;
label_3189fc:
    // 0x3189fc: 0xe62002b8  swc1        $f0, 0x2B8($s1)
    ctx->pc = 0x3189fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 696), bits); }
    // 0x318a00: 0x26230340  addiu       $v1, $s1, 0x340
    ctx->pc = 0x318a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x318a04: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x318a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x318a08: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x318a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x318a0c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x318a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x318a10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x318a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318a14: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x318a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318a18: 0xc442004c  lwc1        $f2, 0x4C($v0)
    ctx->pc = 0x318a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x318a1c: 0xc4440050  lwc1        $f4, 0x50($v0)
    ctx->pc = 0x318a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x318a20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x318a20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x318a24: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x318a24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x318a28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x318a2c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x318a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x318a30: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x318a30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x318a34: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x318a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x318a38: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x318a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x318a3c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x318a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x318a40: 0x107d0005  beq         $v1, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x318A40u;
    {
        const bool branch_taken_0x318a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x318A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A40u;
        // 0x318a44: 0xe7a40004  swc1        $f4, 0x4($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a40) {
            ctx->pc = 0x318A58u;
            goto label_318a58;
        }
    }
    ctx->pc = 0x318A48u;
    // 0x318a48: 0xe6220340  swc1        $f2, 0x340($s1)
    ctx->pc = 0x318a48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
    // 0x318a4c: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x318a4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x318a50: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x318a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318a54: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x318a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_318a58:
    // 0x318a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x318a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318a5c: 0xc0c682e  jal         func_31A0B8
    ctx->pc = 0x318A5Cu;
    SET_GPR_U32(ctx, 31, 0x318A64u);
    ctx->pc = 0x318A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318A5Cu;
    // 0x318a60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A0B8u, 0x318A5Cu, 0x318A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A64u;
label_318a64:
    // 0x318a64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x318a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318a68: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x318a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318a6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x318a6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318a70: 0x0  nop
    ctx->pc = 0x318a70u;
    // NOP
    // 0x318a74: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x318A74u;
    {
        const bool branch_taken_0x318a74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A74u;
        // 0x318a78: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a74) {
            ctx->pc = 0x318A9Cu;
            goto label_318a9c;
        }
    }
    ctx->pc = 0x318A7Cu;
    // 0x318a7c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x318a7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318a80: 0x0  nop
    ctx->pc = 0x318a80u;
    // NOP
    // 0x318a84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x318A84u;
    {
        const bool branch_taken_0x318a84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A84u;
        // 0x318a88: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a84) {
            ctx->pc = 0x318A9Cu;
            goto label_318a9c;
        }
    }
    ctx->pc = 0x318A8Cu;
    // 0x318a8c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x318a8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318a90: 0x0  nop
    ctx->pc = 0x318a90u;
    // NOP
    // 0x318a94: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x318A94u;
    {
        const bool branch_taken_0x318a94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A94u;
        // 0x318a98: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a94) {
            ctx->pc = 0x318AACu;
            goto label_318aac;
        }
    }
    ctx->pc = 0x318A9Cu;
label_318a9c:
    // 0x318a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x318a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318aa0: 0xc0c6822  jal         func_31A088
    ctx->pc = 0x318AA0u;
    SET_GPR_U32(ctx, 31, 0x318AA8u);
    ctx->pc = 0x318AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318AA0u;
    // 0x318aa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A088u, 0x318AA0u, 0x318AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318AA8u;
label_318aa8:
    // 0x318aa8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x318aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_318aac:
    // 0x318aac: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x318aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x318ab0: 0xc441d890  lwc1        $f1, -0x2770($v0)
    ctx->pc = 0x318ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318ab4: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x318ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x318ab8: 0xe6210310  swc1        $f1, 0x310($s1)
    ctx->pc = 0x318ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 784), bits); }
    // 0x318abc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x318abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318ac0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x318ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x318ac4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x318ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318ac8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x318ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x318acc: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x318accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x318ad0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x318ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x318ad4: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x318ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x318ad8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x318ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x318adc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x318ADCu;
    {
        const bool branch_taken_0x318adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318ADCu;
        // 0x318ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318adc) {
            ctx->pc = 0x318AFCu;
            goto label_318afc;
        }
    }
    ctx->pc = 0x318AE4u;
    // 0x318ae4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x318AE4u;
    SET_GPR_U32(ctx, 31, 0x318AECu);
    ctx->pc = 0x318AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318AE4u;
    // 0x318ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x318AE4u, 0x318AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318AECu;
label_318aec:
    // 0x318aec: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x318aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x318af0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x318af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x318af4: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x318af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x318af8: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x318af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_318afc:
    // 0x318afc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x318afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x318b00: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x318b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x318b04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x318b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x318b08: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x318B08u;
    {
        const bool branch_taken_0x318b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318b08) {
            ctx->pc = 0x318B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318B08u;
            // 0x318b0c: 0x8e220350  lw          $v0, 0x350($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318B34u;
            goto label_318b34;
        }
    }
    ctx->pc = 0x318B10u;
    // 0x318b10: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x318b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x318b14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x318b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x318b18: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x318B18u;
    {
        const bool branch_taken_0x318b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318b18) {
            ctx->pc = 0x318B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318B18u;
            // 0x318b1c: 0x8e220350  lw          $v0, 0x350($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318B34u;
            goto label_318b34;
        }
    }
    ctx->pc = 0x318B20u;
    // 0x318b20: 0x3117a  dsrl        $v0, $v1, 5
    ctx->pc = 0x318b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 5);
    // 0x318b24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x318b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x318b28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x318B28u;
    {
        const bool branch_taken_0x318b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B28u;
        // 0x318b2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b28) {
            ctx->pc = 0x318B44u;
            goto label_318b44;
        }
    }
    ctx->pc = 0x318B30u;
    // 0x318b30: 0x8e220350  lw          $v0, 0x350($s1)
    ctx->pc = 0x318b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
label_318b34:
    // 0x318b34: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x318b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x318b38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x318b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x318b3c: 0xae220350  sw          $v0, 0x350($s1)
    ctx->pc = 0x318b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 848), GPR_U32(ctx, 2));
    // 0x318b40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x318b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_318b44:
    // 0x318b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318b48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x318b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318b4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x318b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318b50: 0x3e00008  jr          $ra
    ctx->pc = 0x318B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B50u;
        // 0x318b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318B58u;
}
