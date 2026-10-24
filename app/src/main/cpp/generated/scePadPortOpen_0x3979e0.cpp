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

// Function: scePadPortOpen
// Address: 0x3979e0 - 0x397bc8
void scePadPortOpen_0x3979e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadPortOpen_0x3979e0");
#endif

    switch (ctx->pc) {
        case 0x397a3cu: goto label_397a3c;
        case 0x397a94u: goto label_397a94;
        case 0x397ab0u: goto label_397ab0;
        case 0x397ad4u: goto label_397ad4;
        case 0x397b24u: goto label_397b24;
        default: break;
    }

    ctx->pc = 0x3979e0u;

    // 0x3979e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3979e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3979e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3979e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3979e8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3979e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x3979ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3979ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3979f0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3979f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3979f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3979f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3979f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3979f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3979fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3979fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a00: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x397a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x397a04: 0x3282003f  andi        $v0, $s4, 0x3F
    ctx->pc = 0x397a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
    // 0x397a08: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x397a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x397a0c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x397a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x397a10: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x397a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x397a14: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x397a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x397a18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x397A18u;
    {
        const bool branch_taken_0x397a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A18u;
        // 0x397a1c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a18) {
            ctx->pc = 0x397A44u;
            goto label_397a44;
        }
    }
    ctx->pc = 0x397A20u;
    // 0x397a20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x397a24: 0x8c4385cc  lw          $v1, -0x7A34($v0)
    ctx->pc = 0x397a24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F85CCu));
    // 0x397a28: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x397A28u;
    {
        const bool branch_taken_0x397a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A28u;
        // 0x397a2c: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a28) {
            ctx->pc = 0x397B2Cu;
            goto label_397b2c;
        }
    }
    ctx->pc = 0x397A30u;
    // 0x397a30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x397a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a34: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x397A34u;
    SET_GPR_U32(ctx, 31, 0x397A3Cu);
    ctx->pc = 0x397A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397A34u;
    // 0x397a38: 0x2484e0a8  addiu       $a0, $a0, -0x1F58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x397A34u, 0x397A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397A3Cu;
label_397a3c:
    // 0x397a3c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x397A3Cu;
    {
        const bool branch_taken_0x397a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A3Cu;
        // 0x397a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a3c) {
            ctx->pc = 0x397B94u;
            goto label_397b94;
        }
    }
    ctx->pc = 0x397A44u;
label_397a44:
    // 0x397a44: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x397a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x397a48: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x397a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x397a4c: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x397a4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x397a50: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x397a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x397a54: 0x3c1e0078  lui         $fp, 0x78
    ctx->pc = 0x397a54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)120 << 16));
    // 0x397a58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x397a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397a5c: 0x27c2c110  addiu       $v0, $fp, -0x3EF0
    ctx->pc = 0x397a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951184));
    // 0x397a60: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x397a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x397a64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x397a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x397a68: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x397a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x397a6c: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x397A6Cu;
    {
        const bool branch_taken_0x397a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x397A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A6Cu;
        // 0x397a70: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a6c) {
            ctx->pc = 0x397A9Cu;
            goto label_397a9c;
        }
    }
    ctx->pc = 0x397A74u;
    // 0x397a74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x397a78: 0x8c4385cc  lw          $v1, -0x7A34($v0)
    ctx->pc = 0x397a78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F85CCu));
    // 0x397a7c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x397A7Cu;
    {
        const bool branch_taken_0x397a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A7Cu;
        // 0x397a80: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a7c) {
            ctx->pc = 0x397B2Cu;
            goto label_397b2c;
        }
    }
    ctx->pc = 0x397A84u;
    // 0x397a84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x397a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a88: 0x2484e0d8  addiu       $a0, $a0, -0x1F28
    ctx->pc = 0x397a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959320));
    // 0x397a8c: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x397A8Cu;
    SET_GPR_U32(ctx, 31, 0x397A94u);
    ctx->pc = 0x397A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397A8Cu;
    // 0x397a90: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x397A8Cu, 0x397A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397A94u;
label_397a94:
    // 0x397a94: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x397A94u;
    {
        const bool branch_taken_0x397a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A94u;
        // 0x397a98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a94) {
            ctx->pc = 0x397B94u;
            goto label_397b94;
        }
    }
    ctx->pc = 0x397A9Cu;
label_397a9c:
    // 0x397a9c: 0x3c170078  lui         $s7, 0x78
    ctx->pc = 0x397a9cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)120 << 16));
    // 0x397aa0: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x397aa0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x397aa4: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x397aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397aa8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x397aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397aac: 0x0  nop
    ctx->pc = 0x397aacu;
    // NOP
label_397ab0:
    // 0x397ab0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x397ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x397ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ab8: 0xa2160070  sb          $s6, 0x70($s0)
    ctx->pc = 0x397ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 22));
    // 0x397abc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x397abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x397ac0: 0xa2150071  sb          $s5, 0x71($s0)
    ctx->pc = 0x397ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 21));
    // 0x397ac4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x397ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x397ac8: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x397ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x397acc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x397ACCu;
    SET_GPR_U32(ctx, 31, 0x397AD4u);
    ctx->pc = 0x397AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397ACCu;
    // 0x397ad0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x397ACCu, 0x397AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397AD4u;
label_397ad4:
    // 0x397ad4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x397ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x397ad8: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x397AD8u;
    {
        const bool branch_taken_0x397ad8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x397ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AD8u;
        // 0x397adc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ad8) {
            ctx->pc = 0x397AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397ab0;
        }
    }
    ctx->pc = 0x397AE0u;
    // 0x397ae0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x397ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397ae4: 0x26f0c300  addiu       $s0, $s7, -0x3D00
    ctx->pc = 0x397ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951680));
    // 0x397ae8: 0xaef1c300  sw          $s1, -0x3D00($s7)
    ctx->pc = 0x397ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294951680), GPR_U32(ctx, 17));
    // 0x397aec: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x397aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x397af0: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x397af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x397af4: 0x2484c0c0  addiu       $a0, $a0, -0x3F40
    ctx->pc = 0x397af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951104));
    // 0x397af8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x397af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x397afc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x397afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397b00: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x397b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x397b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x397b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x397b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x397b10: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x397b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x397b14: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x397b14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b18: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x397b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x397b1c: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x397B1Cu;
    SET_GPR_U32(ctx, 31, 0x397B24u);
    ctx->pc = 0x397B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397B1Cu;
    // 0x397b20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x397B1Cu, 0x397B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397B24u;
label_397b24:
    // 0x397b24: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x397B24u;
    {
        const bool branch_taken_0x397b24 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x397B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B24u;
        // 0x397b28: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397b24) {
            ctx->pc = 0x397B34u;
            goto label_397b34;
        }
    }
    ctx->pc = 0x397B2Cu;
label_397b2c:
    // 0x397b2c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x397B2Cu;
    {
        const bool branch_taken_0x397b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B2Cu;
        // 0x397b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397b2c) {
            ctx->pc = 0x397B94u;
            goto label_397b94;
        }
    }
    ctx->pc = 0x397B34u;
label_397b34:
    // 0x397b34: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x397b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x397b38: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x397b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x397b3c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x397b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x397b40: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x397b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x397b44: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x397b44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x397b48: 0x2442c200  addiu       $v0, $v0, -0x3E00
    ctx->pc = 0x397b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951424));
    // 0x397b4c: 0x27c4c110  addiu       $a0, $fp, -0x3EF0
    ctx->pc = 0x397b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951184));
    // 0x397b50: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x397b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x397b54: 0x1331c0  sll         $a2, $s3, 7
    ctx->pc = 0x397b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x397b58: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x397b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x397b5c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x397b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x397b60: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x397b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x397b64: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x397b64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x397b68: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x397b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x397b6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x397b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x397b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b74: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x397b74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x397b78: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x397b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x397b7c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x397b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x397b80: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x397b80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x397b84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x397b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b88: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x397b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x397b8c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x397b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x397b90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x397b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_397b94:
    // 0x397b94: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x397b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x397b98: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x397b98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x397b9c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x397b9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x397ba0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x397ba0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x397ba4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x397ba4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x397ba8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x397ba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x397bac: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x397bacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x397bb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x397bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397bb4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x397bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397bb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x397bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x397BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BBCu;
        // 0x397bc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397BC4u;
    // 0x397bc4: 0x0  nop
    ctx->pc = 0x397bc4u;
    // NOP
    ctx->pc = 0x397bc8u;
}
