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

// Function: func_0010F4B8
// Address: 0x10f4b8 - 0x10f720
void func_0010F4B8_0x10f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010F4B8_0x10f4b8");
#endif

    switch (ctx->pc) {
        case 0x10f4fcu: goto label_10f4fc;
        case 0x10f538u: goto label_10f538;
        case 0x10f570u: goto label_10f570;
        case 0x10f598u: goto label_10f598;
        case 0x10f5dcu: goto label_10f5dc;
        case 0x10f604u: goto label_10f604;
        case 0x10f634u: goto label_10f634;
        case 0x10f654u: goto label_10f654;
        case 0x10f66cu: goto label_10f66c;
        case 0x10f688u: goto label_10f688;
        case 0x10f698u: goto label_10f698;
        case 0x10f6b0u: goto label_10f6b0;
        case 0x10f6d4u: goto label_10f6d4;
        case 0x10f6e0u: goto label_10f6e0;
        case 0x10f6fcu: goto label_10f6fc;
        case 0x10f70cu: goto label_10f70c;
        default: break;
    }

    ctx->pc = 0x10f4b8u;

    // 0x10f4b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10f4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10f4bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10f4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10f4c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f4c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4c8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10f4c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10f4cc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10f4ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10f4d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F4D0u;
    {
        const bool branch_taken_0x10f4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4D0u;
        // 0x10f4d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4d0) {
            ctx->pc = 0x10F4E8u;
            goto label_10f4e8;
        }
    }
    ctx->pc = 0x10F4D8u;
    // 0x10f4d8: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x10F4D8u;
    {
        const bool branch_taken_0x10f4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10f4d8) {
            ctx->pc = 0x10F64Cu;
            goto label_10f64c;
        }
    }
    ctx->pc = 0x10F4E0u;
    // 0x10f4e0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x10F4E0u;
    {
        const bool branch_taken_0x10f4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f4e0) {
            ctx->pc = 0x10F6A8u;
            goto label_10f6a8;
        }
    }
    ctx->pc = 0x10F4E8u;
label_10f4e8:
    // 0x10f4e8: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x10f4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10f4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4f0: 0xa60005e2  sh          $zero, 0x5E2($s0)
    ctx->pc = 0x10f4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x10f4f4: 0xc049150  jal         func_124540
    ctx->pc = 0x10F4F4u;
    SET_GPR_U32(ctx, 31, 0x10F4FCu);
    ctx->pc = 0x10F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4F4u;
    // 0x10f4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10F4F4u, 0x10F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4FCu;
label_10f4fc:
    // 0x10f4fc: 0x8e020640  lw          $v0, 0x640($s0)
    ctx->pc = 0x10f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x10f500: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10F500u;
    {
        const bool branch_taken_0x10f500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f500) {
            ctx->pc = 0x10F504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F500u;
            // 0x10f504: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F53Cu;
            goto label_10f53c;
        }
    }
    ctx->pc = 0x10F508u;
    // 0x10f508: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x10f508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x10f50c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x10f50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x10f510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F510u;
    {
        const bool branch_taken_0x10f510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F510u;
        // 0x10f514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f510) {
            ctx->pc = 0x10F520u;
            goto label_10f520;
        }
    }
    ctx->pc = 0x10F518u;
    // 0x10f518: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x10f518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x10f51c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10f520:
    // 0x10f520: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x10f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x10f524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F524u;
    {
        const bool branch_taken_0x10f524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F524u;
        // 0x10f528: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f524) {
            ctx->pc = 0x10F538u;
            goto label_10f538;
        }
    }
    ctx->pc = 0x10F52Cu;
    // 0x10f52c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x10f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x10f530: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x10F530u;
    SET_GPR_U32(ctx, 31, 0x10F538u);
    ctx->pc = 0x10F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F530u;
    // 0x10f534: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x10F530u, 0x10F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F538u;
label_10f538:
    // 0x10f538: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x10f538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
label_10f53c:
    // 0x10f53c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x10F53Cu;
    {
        const bool branch_taken_0x10f53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F53Cu;
        // 0x10f540: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f53c) {
            ctx->pc = 0x10F5ACu;
            goto label_10f5ac;
        }
    }
    ctx->pc = 0x10F544u;
    // 0x10f544: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x10f544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f54c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x10f54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x10f550: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10f550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10f554: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x10f554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10f558: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f55c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f55cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f560: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f560u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f564: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f568: 0xc042902  jal         func_10A408
    ctx->pc = 0x10F568u;
    SET_GPR_U32(ctx, 31, 0x10F570u);
    ctx->pc = 0x10F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F568u;
    // 0x10f56c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10F568u, 0x10F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F570u;
label_10f570:
    // 0x10f570: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x10f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f578: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x10f578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x10f57c: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x10f57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10f580: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f588: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f58c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f58cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f590: 0xc042908  jal         func_10A420
    ctx->pc = 0x10F590u;
    SET_GPR_U32(ctx, 31, 0x10F598u);
    ctx->pc = 0x10F594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F590u;
    // 0x10f594: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10F590u, 0x10F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F598u;
label_10f598:
    // 0x10f598: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10f59c: 0xa2001684  sb          $zero, 0x1684($s0)
    ctx->pc = 0x10f59cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5764), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f5a0: 0x8c4301c8  lw          $v1, 0x1C8($v0)
    ctx->pc = 0x10f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
    // 0x10f5a4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x10F5A4u;
    {
        const bool branch_taken_0x10f5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5A4u;
        // 0x10f5a8: 0x8c4401cc  lw          $a0, 0x1CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5a4) {
            ctx->pc = 0x10F614u;
            goto label_10f614;
        }
    }
    ctx->pc = 0x10F5ACu;
label_10f5ac:
    // 0x10f5ac: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x10f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5b4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x10f5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x10f5b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10f5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10f5bc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x10f5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10f5c0: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x10f5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10f5c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f5c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5c8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f5c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f5cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f5ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f5d0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f5d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f5d4: 0xc042902  jal         func_10A408
    ctx->pc = 0x10F5D4u;
    SET_GPR_U32(ctx, 31, 0x10F5DCu);
    ctx->pc = 0x10F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5D4u;
    // 0x10f5d8: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10F5D4u, 0x10F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5DCu;
label_10f5dc:
    // 0x10f5dc: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x10f5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5e4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x10f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10f5e8: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x10f5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10f5ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f5ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f5f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f5f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f5f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f5f8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f5f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f5fc: 0xc042908  jal         func_10A420
    ctx->pc = 0x10F5FCu;
    SET_GPR_U32(ctx, 31, 0x10F604u);
    ctx->pc = 0x10F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5FCu;
    // 0x10f600: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10F5FCu, 0x10F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F604u;
label_10f604:
    // 0x10f604: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10f604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10f608: 0xa2001684  sb          $zero, 0x1684($s0)
    ctx->pc = 0x10f608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5764), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f60c: 0x8c4301a4  lw          $v1, 0x1A4($v0)
    ctx->pc = 0x10f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x10f610: 0x8c4401a8  lw          $a0, 0x1A8($v0)
    ctx->pc = 0x10f610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 424)));
label_10f614:
    // 0x10f614: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x10f614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10f618: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10f618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10f61c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10f61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f624: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10f624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f62c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10F62Cu;
    SET_GPR_U32(ctx, 31, 0x10F634u);
    ctx->pc = 0x10F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F62Cu;
    // 0x10f630: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10F62Cu, 0x10F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F634u;
label_10f634:
    // 0x10f634: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10f634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10f638: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x10f638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x10f63c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10f644: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x10f644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x10f648: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10f648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_10f64c:
    // 0x10f64c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x10F64Cu;
    SET_GPR_U32(ctx, 31, 0x10F654u);
    ctx->pc = 0x10F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F64Cu;
    // 0x10f650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x10F64Cu, 0x10F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F654u;
label_10f654:
    // 0x10f654: 0x8e020640  lw          $v0, 0x640($s0)
    ctx->pc = 0x10f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x10f658: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10F658u;
    {
        const bool branch_taken_0x10f658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F658u;
        // 0x10f65c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f658) {
            ctx->pc = 0x10F664u;
            goto label_10f664;
        }
    }
    ctx->pc = 0x10F660u;
    // 0x10f660: 0xa2020648  sb          $v0, 0x648($s0)
    ctx->pc = 0x10f660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10f664:
    // 0x10f664: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10F664u;
    SET_GPR_U32(ctx, 31, 0x10F66Cu);
    ctx->pc = 0x10F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F664u;
    // 0x10f668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10F664u, 0x10F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F66Cu;
label_10f66c:
    // 0x10f66c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10F66Cu;
    {
        const bool branch_taken_0x10f66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f66c) {
            ctx->pc = 0x10F6A8u;
            goto label_10f6a8;
        }
    }
    ctx->pc = 0x10F674u;
    // 0x10f674: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x10f674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x10f678: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F678u;
    {
        const bool branch_taken_0x10f678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f678) {
            ctx->pc = 0x10F67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F678u;
            // 0x10f67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F68Cu;
            goto label_10f68c;
        }
    }
    ctx->pc = 0x10F680u;
    // 0x10f680: 0xc049396  jal         func_124E58
    ctx->pc = 0x10F680u;
    SET_GPR_U32(ctx, 31, 0x10F688u);
    ctx->pc = 0x10F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F680u;
    // 0x10f684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x10F680u, 0x10F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F688u;
label_10f688:
    // 0x10f688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f68c:
    // 0x10f68c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f690: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x10F690u;
    SET_GPR_U32(ctx, 31, 0x10F698u);
    ctx->pc = 0x10F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F690u;
    // 0x10f694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10F690u, 0x10F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F698u;
label_10f698:
    // 0x10f698: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x10f698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f69c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x10f69cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f6a0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x10f6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f6a4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10f6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_10f6a8:
    // 0x10f6a8: 0xc04290e  jal         func_10A438
    ctx->pc = 0x10F6A8u;
    SET_GPR_U32(ctx, 31, 0x10F6B0u);
    ctx->pc = 0x10F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6A8u;
    // 0x10f6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x10F6A8u, 0x10F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6B0u;
label_10f6b0:
    // 0x10f6b0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x10f6b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x10f6b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10f6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10f6b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F6B8u;
    {
        const bool branch_taken_0x10f6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6B8u;
        // 0x10f6bc: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6b8) {
            ctx->pc = 0x10F6D4u;
            goto label_10f6d4;
        }
    }
    ctx->pc = 0x10F6C0u;
    // 0x10f6c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x10f6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x10f6c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10f6c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10f6c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10f6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f6cc: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x10F6CCu;
    SET_GPR_U32(ctx, 31, 0x10F6D4u);
    ctx->pc = 0x10F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6CCu;
    // 0x10f6d0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x10F6CCu, 0x10F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6D4u;
label_10f6d4:
    // 0x10f6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f6d8: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10F6D8u;
    SET_GPR_U32(ctx, 31, 0x10F6E0u);
    ctx->pc = 0x10F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6D8u;
    // 0x10f6dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10F6D8u, 0x10F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6E0u;
label_10f6e0:
    // 0x10f6e0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10F6E0u;
    {
        const bool branch_taken_0x10f6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f6e0) {
            ctx->pc = 0x10F6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F6E0u;
            // 0x10f6e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F710u;
            goto label_10f710;
        }
    }
    ctx->pc = 0x10F6E8u;
    // 0x10f6e8: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x10f6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x10f6ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F6ECu;
    {
        const bool branch_taken_0x10f6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6ECu;
        // 0x10f6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6ec) {
            ctx->pc = 0x10F700u;
            goto label_10f700;
        }
    }
    ctx->pc = 0x10F6F4u;
    // 0x10f6f4: 0xc049396  jal         func_124E58
    ctx->pc = 0x10F6F4u;
    SET_GPR_U32(ctx, 31, 0x10F6FCu);
    ctx->pc = 0x10F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6F4u;
    // 0x10f6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x10F6F4u, 0x10F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6FCu;
label_10f6fc:
    // 0x10f6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f700:
    // 0x10f700: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f704: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x10F704u;
    SET_GPR_U32(ctx, 31, 0x10F70Cu);
    ctx->pc = 0x10F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F704u;
    // 0x10f708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10F704u, 0x10F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F70Cu;
label_10f70c:
    // 0x10f70c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10f70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10f710:
    // 0x10f710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f714: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10f714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10f718: 0x3e00008  jr          $ra
    ctx->pc = 0x10F718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F718u;
        // 0x10f71c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F720u;
}
