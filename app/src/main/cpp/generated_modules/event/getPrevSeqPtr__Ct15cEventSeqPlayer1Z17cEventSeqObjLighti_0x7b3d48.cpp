#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: getPrevSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqObjLighti
// Address: 0x7b3d48 - 0x7b3ed8
void getPrevSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqObjLighti_0x7b3d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPrevSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqObjLighti_0x7b3d48");
#endif

    switch (ctx->pc) {
        case 0x7b3d8cu: goto label_7b3d8c;
        case 0x7b3d9cu: goto label_7b3d9c;
        case 0x7b3dacu: goto label_7b3dac;
        case 0x7b3dd8u: goto label_7b3dd8;
        default: break;
    }

    ctx->pc = 0x7b3d48u;

    // 0x7b3d48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b3d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b3d4c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b3d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b3d50: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b3d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b3d54: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b3d54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3d58: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b3d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b3d5c: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b3d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b3d60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b3d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b3d64: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b3d64u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b3d68: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b3d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b3d6c: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b3d6cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b3d70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b3d70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3d74: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b3d78: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b3d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b3d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b3d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b3d84: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B3D84u;
    SET_GPR_U32(ctx, 31, 0x7B3D8Cu);
    ctx->pc = 0x7B3D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3D84u;
    // 0x7b3d88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B3D84u, 0x7B3D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3D8Cu;
label_7b3d8c:
    // 0x7b3d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3d90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b3d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3d94: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B3D94u;
    SET_GPR_U32(ctx, 31, 0x7B3D9Cu);
    ctx->pc = 0x7B3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3D94u;
    // 0x7b3d98: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B3D94u, 0x7B3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3D9Cu;
label_7b3d9c:
    // 0x7b3d9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b3d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3da4: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B3DA4u;
    SET_GPR_U32(ctx, 31, 0x7B3DACu);
    ctx->pc = 0x7B3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3DA4u;
    // 0x7b3da8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B3DA4u, 0x7B3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3DACu;
label_7b3dac:
    // 0x7b3dac: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b3dacu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b3db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b3db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3db4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b3db8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B3DB8u;
    {
        const bool branch_taken_0x7b3db8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3DB8u;
        // 0x7b3dbc: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3db8) {
            ctx->pc = 0x7B3DC8u;
            goto label_7b3dc8;
        }
    }
    ctx->pc = 0x7B3DC0u;
    // 0x7b3dc0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B3DC0u;
    {
        const bool branch_taken_0x7b3dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3DC0u;
        // 0x7b3dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3dc0) {
            ctx->pc = 0x7B3EB0u;
            goto label_7b3eb0;
        }
    }
    ctx->pc = 0x7B3DC8u;
label_7b3dc8:
    // 0x7b3dc8: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b3dcc: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B3DCCu;
    {
        const bool branch_taken_0x7b3dcc = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3DCCu;
        // 0x7b3dd0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3dcc) {
            ctx->pc = 0x7B3EB0u;
            goto label_7b3eb0;
        }
    }
    ctx->pc = 0x7B3DD4u;
    // 0x7b3dd4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b3dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b3dd8:
    // 0x7b3dd8: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b3dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b3ddc: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B3DDCu;
    {
        const bool branch_taken_0x7b3ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b3ddc) {
            ctx->pc = 0x7B3DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3DDCu;
            // 0x7b3de0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3EA4u;
            goto label_7b3ea4;
        }
    }
    ctx->pc = 0x7B3DE4u;
    // 0x7b3de4: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b3de4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b3de8: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x7b3de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b3dec: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B3DECu;
    {
        const bool branch_taken_0x7b3dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3dec) {
            ctx->pc = 0x7B3DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3DECu;
            // 0x7b3df0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3EA4u;
            goto label_7b3ea4;
        }
    }
    ctx->pc = 0x7B3DF4u;
    // 0x7b3df4: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B3DF4u;
    {
        const bool branch_taken_0x7b3df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b3df4) {
            ctx->pc = 0x7B3E40u;
            goto label_7b3e40;
        }
    }
    ctx->pc = 0x7B3DFCu;
    // 0x7b3dfc: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b3dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b3e00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3E00u;
    {
        const bool branch_taken_0x7b3e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3e00) {
            ctx->pc = 0x7B3E18u;
            goto label_7b3e18;
        }
    }
    ctx->pc = 0x7B3E08u;
    // 0x7b3e08: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x7B3E08u;
    {
        const bool branch_taken_0x7b3e08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3e08) {
            ctx->pc = 0x7B3E40u;
            goto label_7b3e40;
        }
    }
    ctx->pc = 0x7B3E10u;
    // 0x7b3e10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3E10u;
    {
        const bool branch_taken_0x7b3e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3E10u;
        // 0x7b3e14: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3e10) {
            ctx->pc = 0x7B3E24u;
            goto label_7b3e24;
        }
    }
    ctx->pc = 0x7B3E18u;
label_7b3e18:
    // 0x7b3e18: 0x52400022  beql        $s2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x7B3E18u;
    {
        const bool branch_taken_0x7b3e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3e18) {
            ctx->pc = 0x7B3E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3E18u;
            // 0x7b3e1c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3EA4u;
            goto label_7b3ea4;
        }
    }
    ctx->pc = 0x7B3E20u;
    // 0x7b3e20: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b3e20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b3e24:
    // 0x7b3e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b3e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b3e28: 0x0  nop
    ctx->pc = 0x7b3e28u;
    // NOP
    // 0x7b3e2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b3e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b3e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7b3e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b3e34: 0x0  nop
    ctx->pc = 0x7b3e34u;
    // NOP
    // 0x7b3e38: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B3E38u;
    {
        const bool branch_taken_0x7b3e38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b3e38) {
            ctx->pc = 0x7B3E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3E38u;
            // 0x7b3e3c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3EA4u;
            goto label_7b3ea4;
        }
    }
    ctx->pc = 0x7B3E40u;
label_7b3e40:
    // 0x7b3e40: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B3E40u;
    {
        const bool branch_taken_0x7b3e40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3e40) {
            ctx->pc = 0x7B3E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3E40u;
            // 0x7b3e44: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3EA0u;
            goto label_7b3ea0;
        }
    }
    ctx->pc = 0x7B3E48u;
    // 0x7b3e48: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b3e48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b3e4c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b3e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b3e50: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x7b3e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7b3e54: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B3E54u;
    {
        const bool branch_taken_0x7b3e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3e54) {
            ctx->pc = 0x7B3E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3E54u;
            // 0x7b3e58: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3EA4u;
            goto label_7b3ea4;
        }
    }
    ctx->pc = 0x7B3E5Cu;
    // 0x7b3e5c: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B3E5Cu;
    {
        const bool branch_taken_0x7b3e5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b3e5c) {
            ctx->pc = 0x7B3E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3E5Cu;
            // 0x7b3e60: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3EA0u;
            goto label_7b3ea0;
        }
    }
    ctx->pc = 0x7B3E64u;
    // 0x7b3e64: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b3e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b3e68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3E68u;
    {
        const bool branch_taken_0x7b3e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3E68u;
        // 0x7b3e6c: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3e68) {
            ctx->pc = 0x7B3E80u;
            goto label_7b3e80;
        }
    }
    ctx->pc = 0x7B3E70u;
    // 0x7b3e70: 0x5048000c  beql        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x7B3E70u;
    {
        const bool branch_taken_0x7b3e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b3e70) {
            ctx->pc = 0x7B3E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3E70u;
            // 0x7b3e74: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3EA4u;
            goto label_7b3ea4;
        }
    }
    ctx->pc = 0x7B3E78u;
    // 0x7b3e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3E78u;
    {
        const bool branch_taken_0x7b3e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3E78u;
        // 0x7b3e7c: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3e78) {
            ctx->pc = 0x7B3E8Cu;
            goto label_7b3e8c;
        }
    }
    ctx->pc = 0x7B3E80u;
label_7b3e80:
    // 0x7b3e80: 0x54480007  bnel        $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B3E80u;
    {
        const bool branch_taken_0x7b3e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b3e80) {
            ctx->pc = 0x7B3E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3E80u;
            // 0x7b3e84: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3EA0u;
            goto label_7b3ea0;
        }
    }
    ctx->pc = 0x7B3E88u;
    // 0x7b3e88: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b3e88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b3e8c:
    // 0x7b3e8c: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x7b3e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b3e90: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b3e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b3e94: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B3E94u;
    {
        const bool branch_taken_0x7b3e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3e94) {
            ctx->pc = 0x7B3E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3E94u;
            // 0x7b3e98: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3EA4u;
            goto label_7b3ea4;
        }
    }
    ctx->pc = 0x7B3E9Cu;
    // 0x7b3e9c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b3e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b3ea0:
    // 0x7b3ea0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b3ea4:
    // 0x7b3ea4: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B3EA4u;
    {
        const bool branch_taken_0x7b3ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3EA4u;
        // 0x7b3ea8: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3ea4) {
            ctx->pc = 0x7B3DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b3dd8;
        }
    }
    ctx->pc = 0x7B3EACu;
    // 0x7b3eac: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b3eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b3eb0:
    // 0x7b3eb0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b3eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b3eb4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b3eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b3eb8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b3eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b3ebc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b3ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b3ec0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b3ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b3ec4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b3ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b3ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b3ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b3ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x7B3ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3ECCu;
        // 0x7b3ed0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B3ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B3ED4u;
    // 0x7b3ed4: 0x0  nop
    ctx->pc = 0x7b3ed4u;
    // NOP
    ctx->pc = 0x7b3ed8u;
}
} // namespace gh_event
