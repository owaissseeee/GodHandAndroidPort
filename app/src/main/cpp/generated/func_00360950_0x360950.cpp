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

// Function: func_00360950
// Address: 0x360950 - 0x360aa8
void func_00360950_0x360950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360950_0x360950");
#endif

    switch (ctx->pc) {
        case 0x360970u: goto label_360970;
        case 0x3609c4u: goto label_3609c4;
        case 0x3609e0u: goto label_3609e0;
        case 0x3609f8u: goto label_3609f8;
        default: break;
    }

    ctx->pc = 0x360950u;

    // 0x360950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x360954: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x360954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x360958: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x360958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36095c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36095cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360960: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x360960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360964: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x360964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x360968: 0xc0cff5c  jal         func_33FD70
    ctx->pc = 0x360968u;
    SET_GPR_U32(ctx, 31, 0x360970u);
    ctx->pc = 0x36096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360968u;
    // 0x36096c: 0x2444a280  addiu       $a0, $v0, -0x5D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FD70u, 0x360968u, 0x360970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360970u;
label_360970:
    // 0x360970: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x360970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x360974: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x360974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360978: 0x2484ea78  addiu       $a0, $a0, -0x1588
    ctx->pc = 0x360978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961784));
    // 0x36097c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36097cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEA78u));
    // 0x360980: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x360980u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x360984: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x360984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x360988: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x360988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x36098c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360990: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x360990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x360994: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x360994u;
    {
        const bool branch_taken_0x360994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360994u;
        // 0x360998: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360994) {
            ctx->pc = 0x3609B0u;
            goto label_3609b0;
        }
    }
    ctx->pc = 0x36099Cu;
    // 0x36099c: 0x8c62ea7c  lw          $v0, -0x1584($v1)
    ctx->pc = 0x36099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961788)));
    // 0x3609a0: 0x1050003c  beq         $v0, $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3609A0u;
    {
        const bool branch_taken_0x3609a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3609A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3609A0u;
        // 0x3609a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3609a0) {
            ctx->pc = 0x360A94u;
            goto label_360a94;
        }
    }
    ctx->pc = 0x3609A8u;
    // 0x3609a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3609A8u;
    {
        const bool branch_taken_0x3609a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3609a8) {
            ctx->pc = 0x3609B4u;
            goto label_3609b4;
        }
    }
    ctx->pc = 0x3609B0u;
label_3609b0:
    // 0x3609b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3609b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3609b4:
    // 0x3609b4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3609B4u;
    {
        const bool branch_taken_0x3609b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3609B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3609B4u;
        // 0x3609b8: 0xac70ea7c  sw          $s0, -0x1584($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961788), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3609b4) {
            ctx->pc = 0x3609D0u;
            goto label_3609d0;
        }
    }
    ctx->pc = 0x3609BCu;
    // 0x3609bc: 0xc0d8320  jal         func_360C80
    ctx->pc = 0x3609BCu;
    SET_GPR_U32(ctx, 31, 0x3609C4u);
    ctx->pc = 0x3609C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3609BCu;
    // 0x3609c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360C80u, 0x3609BCu, 0x3609C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3609C4u;
label_3609c4:
    // 0x3609c4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3609C4u;
    {
        const bool branch_taken_0x3609c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3609C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3609C4u;
        // 0x3609c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3609c4) {
            ctx->pc = 0x360A98u;
            goto label_360a98;
        }
    }
    ctx->pc = 0x3609CCu;
    // 0x3609cc: 0x0  nop
    ctx->pc = 0x3609ccu;
    // NOP
label_3609d0:
    // 0x3609d0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3609d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3609d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3609d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3609d8: 0xc0cff5c  jal         func_33FD70
    ctx->pc = 0x3609D8u;
    SET_GPR_U32(ctx, 31, 0x3609E0u);
    ctx->pc = 0x3609DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3609D8u;
    // 0x3609dc: 0x2484a288  addiu       $a0, $a0, -0x5D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FD70u, 0x3609D8u, 0x3609E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3609E0u;
label_3609e0:
    // 0x3609e0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3609e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x3609e4: 0x3484ca00  ori         $a0, $a0, 0xCA00
    ctx->pc = 0x3609e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51712);
    // 0x3609e8: 0x9fa30000  lwu         $v1, 0x0($sp)
    ctx->pc = 0x3609e8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3609ec: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3609ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3609f0: 0xc0d8320  jal         func_360C80
    ctx->pc = 0x3609F0u;
    SET_GPR_U32(ctx, 31, 0x3609F8u);
    ctx->pc = 0x3609F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3609F0u;
    // 0x3609f4: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360C80u, 0x3609F0u, 0x3609F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3609F8u;
label_3609f8:
    // 0x3609f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x3609f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x3609fc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x3609fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x360a00: 0x24070082  addiu       $a3, $zero, 0x82
    ctx->pc = 0x360a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x360a04: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x360a04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x360a08: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x360a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x360a0c: 0x8cc6a260  lw          $a2, -0x5DA0($a2)
    ctx->pc = 0x360a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943328)));
    // 0x360a10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x360a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x360a14: 0x304300c7  andi        $v1, $v0, 0xC7
    ctx->pc = 0x360a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)199);
    // 0x360a18: 0x10670009  beq         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x360A18u;
    {
        const bool branch_taken_0x360a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x360A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360A18u;
        // 0x360a1c: 0xac82ea80  sw          $v0, -0x1580($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360a18) {
            ctx->pc = 0x360A40u;
            goto label_360a40;
        }
    }
    ctx->pc = 0x360A20u;
    // 0x360a20: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x360a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x360a24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x360a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x360a28: 0x8c42a270  lw          $v0, -0x5D90($v0)
    ctx->pc = 0x360a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943344)));
    // 0x360a2c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x360a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x360a30: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x360a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x360a34: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x360a34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x360a38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x360A38u;
    {
        const bool branch_taken_0x360a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360A38u;
        // 0x360a3c: 0x2462a270  addiu       $v0, $v1, -0x5D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360a38) {
            ctx->pc = 0x360A48u;
            goto label_360a48;
        }
    }
    ctx->pc = 0x360A40u;
label_360a40:
    // 0x360a40: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x360a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x360a44: 0x2462a270  addiu       $v0, $v1, -0x5D90
    ctx->pc = 0x360a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943344));
label_360a48:
    // 0x360a48: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x360a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x360a4c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x360a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x360a50: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x360a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x360a54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x360a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360a58: 0x24846ca8  addiu       $a0, $a0, 0x6CA8
    ctx->pc = 0x360a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27816));
    // 0x360a5c: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8
    ctx->pc = 0x360a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
    // 0x360a60: 0x3c070076  lui         $a3, 0x76
    ctx->pc = 0x360a60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)118 << 16));
    // 0x360a64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x360a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360a68: 0x3c060076  lui         $a2, 0x76
    ctx->pc = 0x360a68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)118 << 16));
    // 0x360a6c: 0x24e76cc8  addiu       $a3, $a3, 0x6CC8
    ctx->pc = 0x360a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27848));
    // 0x360a70: 0x24c66ccc  addiu       $a2, $a2, 0x6CCC
    ctx->pc = 0x360a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27852));
    // 0x360a74: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x360a74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x766CB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x766CB0u, _value); } while (0);
    // 0x360a78: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x360a78u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x766CA8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x766CA8u, _value); } while (0);
    // 0x360a7c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x360a7cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x766CA8u));
    // 0x360a80: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x360a80u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x766CB8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x766CB8u, _value); } while (0);
    // 0x360a84: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x360a84u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x766CB0u));
    // 0x360a88: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x360a88u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x766CC0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x766CC0u, _value); } while (0);
    // 0x360a8c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x360a8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x766CC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766CC8u, _value); } while (0);
    // 0x360a90: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x360a90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x766CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766CCCu, _value); } while (0);
label_360a94:
    // 0x360a94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x360a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_360a98:
    // 0x360a98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x360a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x360A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360A9Cu;
        // 0x360aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360AA4u;
    // 0x360aa4: 0x0  nop
    ctx->pc = 0x360aa4u;
    // NOP
    ctx->pc = 0x360aa8u;
}
