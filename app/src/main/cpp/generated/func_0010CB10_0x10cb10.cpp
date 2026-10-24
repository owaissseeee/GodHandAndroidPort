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

// Function: func_0010CB10
// Address: 0x10cb10 - 0x10cc58
void func_0010CB10_0x10cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010CB10_0x10cb10");
#endif

    switch (ctx->pc) {
        case 0x10cb64u: goto label_10cb64;
        case 0x10cba4u: goto label_10cba4;
        case 0x10cbd0u: goto label_10cbd0;
        case 0x10cbf0u: goto label_10cbf0;
        case 0x10cc04u: goto label_10cc04;
        case 0x10cc28u: goto label_10cc28;
        case 0x10cc34u: goto label_10cc34;
        case 0x10cc40u: goto label_10cc40;
        default: break;
    }

    ctx->pc = 0x10cb10u;

    // 0x10cb10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10cb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10cb14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10cb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10cb18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cb1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb20: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10cb20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10cb24: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x10cb24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x10cb28: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CB28u;
    {
        const bool branch_taken_0x10cb28 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x10cb28) {
            ctx->pc = 0x10CB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CB28u;
            // 0x10cb2c: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CB3Cu;
            goto label_10cb3c;
        }
    }
    ctx->pc = 0x10CB30u;
    // 0x10cb30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cb34: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x10cb34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x10cb38: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10cb38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_10cb3c:
    // 0x10cb3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CB3Cu;
    {
        const bool branch_taken_0x10cb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB3Cu;
        // 0x10cb40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb3c) {
            ctx->pc = 0x10CB54u;
            goto label_10cb54;
        }
    }
    ctx->pc = 0x10CB44u;
    // 0x10cb44: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x10CB44u;
    {
        const bool branch_taken_0x10cb44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB44u;
        // 0x10cb48: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb44) {
            ctx->pc = 0x10CBE0u;
            goto label_10cbe0;
        }
    }
    ctx->pc = 0x10CB4Cu;
    // 0x10cb4c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x10CB4Cu;
    {
        const bool branch_taken_0x10cb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB4Cu;
        // 0x10cb50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb4c) {
            ctx->pc = 0x10CC44u;
            goto label_10cc44;
        }
    }
    ctx->pc = 0x10CB54u;
label_10cb54:
    // 0x10cb54: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x10cb54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10cb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb5c: 0xc049396  jal         func_124E58
    ctx->pc = 0x10CB5Cu;
    SET_GPR_U32(ctx, 31, 0x10CB64u);
    ctx->pc = 0x10CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB5Cu;
    // 0x10cb60: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x10CB5Cu, 0x10CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB64u;
label_10cb64:
    // 0x10cb64: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x10cb64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10cb68: 0x8e0406a0  lw          $a0, 0x6A0($s0)
    ctx->pc = 0x10cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x10cb6c: 0x8d02007c  lw          $v0, 0x7C($t0)
    ctx->pc = 0x10cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 124)));
    // 0x10cb70: 0x8d030080  lw          $v1, 0x80($t0)
    ctx->pc = 0x10cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x10cb74: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x10cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10cb78: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10CB78u;
    {
        const bool branch_taken_0x10cb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB78u;
        // 0x10cb7c: 0x683021  addu        $a2, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb78) {
            ctx->pc = 0x10CBB8u;
            goto label_10cbb8;
        }
    }
    ctx->pc = 0x10CB80u;
    // 0x10cb80: 0x8d05039c  lw          $a1, 0x39C($t0)
    ctx->pc = 0x10cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 924)));
    // 0x10cb84: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x10cb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10cb88: 0x8d0603a0  lw          $a2, 0x3A0($t0)
    ctx->pc = 0x10cb88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 928)));
    // 0x10cb8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10cb8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb90: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x10cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10cb94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10cb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10cb98: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x10cb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x10cb9c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10CB9Cu;
    SET_GPR_U32(ctx, 31, 0x10CBA4u);
    ctx->pc = 0x10CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB9Cu;
    // 0x10cba0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10CB9Cu, 0x10CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBA4u;
label_10cba4:
    // 0x10cba4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10cba8: 0x8c4303a4  lw          $v1, 0x3A4($v0)
    ctx->pc = 0x10cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x10cbac: 0x8c4403a8  lw          $a0, 0x3A8($v0)
    ctx->pc = 0x10cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 936)));
    // 0x10cbb0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x10cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10cbb4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10cbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10cbb8:
    // 0x10cbb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10cbb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10cbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbc0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x10cbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10cbc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10cbc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbc8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10CBC8u;
    SET_GPR_U32(ctx, 31, 0x10CBD0u);
    ctx->pc = 0x10CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBC8u;
    // 0x10cbcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10CBC8u, 0x10CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBD0u;
label_10cbd0:
    // 0x10cbd0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10cbd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10cbd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10cbd8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10cbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x10cbdc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x10cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_10cbe0:
    // 0x10cbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbe4: 0xc440d488  lwc1        $f0, -0x2B78($v0)
    ctx->pc = 0x10cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10cbe8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10CBE8u;
    SET_GPR_U32(ctx, 31, 0x10CBF0u);
    ctx->pc = 0x10CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBE8u;
    // 0x10cbec: 0xe60015f0  swc1        $f0, 0x15F0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5616), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10CBE8u, 0x10CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBF0u;
label_10cbf0:
    // 0x10cbf0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10CBF0u;
    {
        const bool branch_taken_0x10cbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBF0u;
        // 0x10cbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbf0) {
            ctx->pc = 0x10CC14u;
            goto label_10cc14;
        }
    }
    ctx->pc = 0x10CBF8u;
    // 0x10cbf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cbfc: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x10CBFCu;
    SET_GPR_U32(ctx, 31, 0x10CC04u);
    ctx->pc = 0x10CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBFCu;
    // 0x10cc00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10CBFCu, 0x10CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC04u;
label_10cc04:
    // 0x10cc04: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x10cc04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10cc08: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x10cc08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10cc0c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x10cc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10cc10: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10cc10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_10cc14:
    // 0x10cc14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10cc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10cc18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10cc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10cc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc20: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10CC20u;
    SET_GPR_U32(ctx, 31, 0x10CC28u);
    ctx->pc = 0x10CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC20u;
    // 0x10cc24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10CC20u, 0x10CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC28u;
label_10cc28:
    // 0x10cc28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc2c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x10CC2Cu;
    SET_GPR_U32(ctx, 31, 0x10CC34u);
    ctx->pc = 0x10CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC2Cu;
    // 0x10cc30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10CC2Cu, 0x10CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC34u;
label_10cc34:
    // 0x10cc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc38: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10CC38u;
    SET_GPR_U32(ctx, 31, 0x10CC40u);
    ctx->pc = 0x10CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC38u;
    // 0x10cc3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10CC38u, 0x10CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC40u;
label_10cc40:
    // 0x10cc40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10cc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10cc44:
    // 0x10cc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cc48: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10cc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC4Cu;
        // 0x10cc50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CC54u;
    // 0x10cc54: 0x0  nop
    ctx->pc = 0x10cc54u;
    // NOP
    ctx->pc = 0x10cc58u;
}
