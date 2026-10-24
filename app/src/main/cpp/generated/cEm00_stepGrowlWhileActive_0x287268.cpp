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

// Function: cEm00_stepGrowlWhileActive
// Address: 0x287268 - 0x2873b8
void cEm00_stepGrowlWhileActive_0x287268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepGrowlWhileActive_0x287268");
#endif

    switch (ctx->pc) {
        case 0x28728cu: goto label_28728c;
        case 0x2872e0u: goto label_2872e0;
        case 0x28730cu: goto label_28730c;
        case 0x287314u: goto label_287314;
        case 0x28731cu: goto label_28731c;
        case 0x287324u: goto label_287324;
        case 0x287374u: goto label_287374;
        case 0x28737cu: goto label_28737c;
        default: break;
    }

    ctx->pc = 0x287268u;

    // 0x287268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28726c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28726cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287270: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x287270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x287274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x287274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28727c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x28727cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x287280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287284: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x287284u;
    SET_GPR_U32(ctx, 31, 0x28728Cu);
    ctx->pc = 0x287288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287284u;
    // 0x287288: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x287284u, 0x28728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28728Cu;
label_28728c:
    // 0x28728c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28728cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x287290: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x287290u;
    {
        const bool branch_taken_0x287290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287290u;
        // 0x287294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287290) {
            ctx->pc = 0x2872A8u;
            goto label_2872a8;
        }
    }
    ctx->pc = 0x287298u;
    // 0x287298: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x287298u;
    {
        const bool branch_taken_0x287298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x287298) {
            ctx->pc = 0x2872F8u;
            goto label_2872f8;
        }
    }
    ctx->pc = 0x2872A0u;
    // 0x2872a0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2872A0u;
    {
        const bool branch_taken_0x2872a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2872a0) {
            ctx->pc = 0x28731Cu;
            goto label_28731c;
        }
    }
    ctx->pc = 0x2872A8u;
label_2872a8:
    // 0x2872a8: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x2872a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2872ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2872acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872b0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2872b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2872b4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2872b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2872b8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2872b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2872bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2872bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2872c0: 0xae0215b0  sw          $v0, 0x15B0($s0)
    ctx->pc = 0x2872c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    // 0x2872c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2872c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2872c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872cc: 0x8c650120  lw          $a1, 0x120($v1)
    ctx->pc = 0x2872ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x2872d0: 0x8c660124  lw          $a2, 0x124($v1)
    ctx->pc = 0x2872d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x2872d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2872d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2872d8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2872D8u;
    SET_GPR_U32(ctx, 31, 0x2872E0u);
    ctx->pc = 0x2872DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2872D8u;
    // 0x2872dc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2872D8u, 0x2872E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2872E0u;
label_2872e0:
    // 0x2872e0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2872e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2872e4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2872e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2872e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2872e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2872ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2872ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2872f0: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2872f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2872f4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2872f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2872f8:
    // 0x2872f8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2872f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2872fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2872fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287304: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287304u;
    SET_GPR_U32(ctx, 31, 0x28730Cu);
    ctx->pc = 0x287308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287304u;
    // 0x287308: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287304u, 0x28730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28730Cu;
label_28730c:
    // 0x28730c: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x28730Cu;
    SET_GPR_U32(ctx, 31, 0x287314u);
    ctx->pc = 0x287310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28730Cu;
    // 0x287310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x28730Cu, 0x287314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287314u;
label_287314:
    // 0x287314: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x287314u;
    SET_GPR_U32(ctx, 31, 0x28731Cu);
    ctx->pc = 0x287318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287314u;
    // 0x287318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x287314u, 0x28731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28731Cu;
label_28731c:
    // 0x28731c: 0xc0a2506  jal         func_289418
    ctx->pc = 0x28731Cu;
    SET_GPR_U32(ctx, 31, 0x287324u);
    ctx->pc = 0x287320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28731Cu;
    // 0x287320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289418u, 0x28731Cu, 0x287324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287324u;
label_287324:
    // 0x287324: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x287324u;
    {
        const bool branch_taken_0x287324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287324) {
            ctx->pc = 0x287398u;
            goto label_287398;
        }
    }
    ctx->pc = 0x28732Cu;
    // 0x28732c: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x28732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287330: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x287330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287334: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x287334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287338: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x287338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28733c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x28733cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287340: 0x0  nop
    ctx->pc = 0x287340u;
    // NOP
    // 0x287344: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x287344u;
    {
        const bool branch_taken_0x287344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287344u;
        // 0x287348: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287344) {
            ctx->pc = 0x2873A8u;
            goto label_2873a8;
        }
    }
    ctx->pc = 0x28734Cu;
    // 0x28734c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x28734cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x287350: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x287350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287354: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x287354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x287358: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x287358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x28735c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28735cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287360: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287364: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287364u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287368: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x287368u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28736c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28736Cu;
    SET_GPR_U32(ctx, 31, 0x287374u);
    ctx->pc = 0x287370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28736Cu;
    // 0x287370: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28736Cu, 0x287374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287374u;
label_287374:
    // 0x287374: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x287374u;
    SET_GPR_U32(ctx, 31, 0x28737Cu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x287374u, 0x28737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28737Cu;
label_28737c:
    // 0x28737c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x28737cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x287380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287384: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x287384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x287388: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x287388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28738c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28738cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x287390u;
    {
        const bool branch_taken_0x287390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287390u;
        // 0x287394: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287390) {
            ctx->pc = 0x2873A0u;
            goto label_2873a0;
        }
    }
    ctx->pc = 0x287398u;
label_287398:
    // 0x287398: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x287398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28739c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28739cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2873a0:
    // 0x2873a0: 0x0  nop
    ctx->pc = 0x2873a0u;
    // NOP
    // 0x2873a4: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2873a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_2873a8:
    // 0x2873a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2873a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2873ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2873acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2873b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2873B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2873B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873B0u;
        // 0x2873b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2873B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2873B8u;
}
