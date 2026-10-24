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

// Function: func_00241908
// Address: 0x241908 - 0x241c18
void func_00241908_0x241908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00241908_0x241908");
#endif

    switch (ctx->pc) {
        case 0x241964u: goto label_241964;
        case 0x241990u: goto label_241990;
        case 0x24199cu: goto label_24199c;
        case 0x241a34u: goto label_241a34;
        case 0x241a48u: goto label_241a48;
        case 0x241a78u: goto label_241a78;
        case 0x241a84u: goto label_241a84;
        case 0x241a90u: goto label_241a90;
        case 0x241b7cu: goto label_241b7c;
        case 0x241b88u: goto label_241b88;
        case 0x241b94u: goto label_241b94;
        default: break;
    }

    ctx->pc = 0x241908u;

    // 0x241908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x241908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24190c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x241910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x241914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x241918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24191c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x24191cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x241920: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x241920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x241924: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x241924u;
    {
        const bool branch_taken_0x241924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241924u;
        // 0x241928: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241924) {
            ctx->pc = 0x241A04u;
            goto label_241a04;
        }
    }
    ctx->pc = 0x24192Cu;
    // 0x24192c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24192Cu;
    {
        const bool branch_taken_0x24192c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24192c) {
            ctx->pc = 0x241930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24192Cu;
            // 0x241930: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241944u;
            goto label_241944;
        }
    }
    ctx->pc = 0x241934u;
    // 0x241934: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x241934u;
    {
        const bool branch_taken_0x241934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x241934) {
            ctx->pc = 0x24195Cu;
            goto label_24195c;
        }
    }
    ctx->pc = 0x24193Cu;
    // 0x24193c: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x24193Cu;
    {
        const bool branch_taken_0x24193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24193Cu;
        // 0x241940: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24193c) {
            ctx->pc = 0x241C08u;
            goto label_241c08;
        }
    }
    ctx->pc = 0x241944u;
label_241944:
    // 0x241944: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x241944u;
    {
        const bool branch_taken_0x241944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241944u;
        // 0x241948: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241944) {
            ctx->pc = 0x241B28u;
            goto label_241b28;
        }
    }
    ctx->pc = 0x24194Cu;
    // 0x24194c: 0x5062007d  beql        $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x24194Cu;
    {
        const bool branch_taken_0x24194c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24194c) {
            ctx->pc = 0x241950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24194Cu;
            // 0x241950: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241B44u;
            goto label_241b44;
        }
    }
    ctx->pc = 0x241954u;
    // 0x241954: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x241954u;
    {
        const bool branch_taken_0x241954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241954u;
        // 0x241958: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241954) {
            ctx->pc = 0x241C08u;
            goto label_241c08;
        }
    }
    ctx->pc = 0x24195Cu;
label_24195c:
    // 0x24195c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24195Cu;
    SET_GPR_U32(ctx, 31, 0x241964u);
    ctx->pc = 0x241960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24195Cu;
    // 0x241960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24195Cu, 0x241964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241964u;
label_241964:
    // 0x241964: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x241964u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x241968: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24196c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x24196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x241970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241974: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x241974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x241978: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24197c: 0x8c4510a8  lw          $a1, 0x10A8($v0)
    ctx->pc = 0x24197cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4264)));
    // 0x241980: 0x8c4610ac  lw          $a2, 0x10AC($v0)
    ctx->pc = 0x241980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
    // 0x241984: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x241984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x241988: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x241988u;
    SET_GPR_U32(ctx, 31, 0x241990u);
    ctx->pc = 0x24198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241988u;
    // 0x24198c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x241988u, 0x241990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241990u;
label_241990:
    // 0x241990: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x241990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x241994: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x241994u;
    SET_GPR_U32(ctx, 31, 0x24199Cu);
    ctx->pc = 0x241998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241994u;
    // 0x241998: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x241994u, 0x24199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24199Cu;
label_24199c:
    // 0x24199c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2419a0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2419a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2419a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2419A4u;
    {
        const bool branch_taken_0x2419a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419A4u;
        // 0x2419a8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419a4) {
            ctx->pc = 0x2419C4u;
            goto label_2419c4;
        }
    }
    ctx->pc = 0x2419ACu;
    // 0x2419ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2419acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2419b0: 0x2442c800  addiu       $v0, $v0, -0x3800
    ctx->pc = 0x2419b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952960));
    // 0x2419b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2419b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2419b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2419b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2419bc: 0x800008  jr          $a0
    ctx->pc = 0x2419BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2419C4u: goto label_2419c4;
            case 0x2419D8u: goto label_2419d8;
            case 0x2419E8u: goto label_2419e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2419BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2419C4u;
label_2419c4:
    // 0x2419c4: 0x3c01443b  lui         $at, 0x443B
    ctx->pc = 0x2419c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17467 << 16));
    // 0x2419c8: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x2419c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x2419cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2419ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2419d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2419D0u;
    {
        const bool branch_taken_0x2419d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419D0u;
        // 0x2419d4: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419d0) {
            ctx->pc = 0x2419F8u;
            goto label_2419f8;
        }
    }
    ctx->pc = 0x2419D8u;
label_2419d8:
    // 0x2419d8: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x2419d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x2419dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2419dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2419e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2419E0u;
    {
        const bool branch_taken_0x2419e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419E0u;
        // 0x2419e4: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419e0) {
            ctx->pc = 0x2419F8u;
            goto label_2419f8;
        }
    }
    ctx->pc = 0x2419E8u;
label_2419e8:
    // 0x2419e8: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x2419e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x2419ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2419ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2419f0: 0x0  nop
    ctx->pc = 0x2419f0u;
    // NOP
    // 0x2419f4: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2419f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_2419f8:
    // 0x2419f8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2419f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2419fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2419fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x241a00: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x241a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_241a04:
    // 0x241a04: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x241a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241a0c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x241a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x241a10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x241a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x241a14: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x241a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x241a18: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x241a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x241a1c: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x241a1cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x241a20: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x241a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x241a24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x241a28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x241a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x241a2c: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x241A2Cu;
    SET_GPR_U32(ctx, 31, 0x241A34u);
    ctx->pc = 0x241A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A2Cu;
    // 0x241a30: 0xa2020617  sb          $v0, 0x617($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x241A2Cu, 0x241A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A34u;
label_241a34:
    // 0x241a34: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x241a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241a38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x241a38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x241a3c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x241a3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x241a40: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x241A40u;
    SET_GPR_U32(ctx, 31, 0x241A48u);
    ctx->pc = 0x241A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A40u;
    // 0x241a44: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x241A40u, 0x241A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A48u;
label_241a48:
    // 0x241a48: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x241a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x241a4c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x241a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x241a50: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x241a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x241a54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x241a58: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x241a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x241a5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x241a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x241a60: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x241a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x241a64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x241a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x241a68: 0xe601054c  swc1        $f1, 0x54C($s0)
    ctx->pc = 0x241a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x241a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a70: 0xc055f06  jal         func_157C18
    ctx->pc = 0x241A70u;
    SET_GPR_U32(ctx, 31, 0x241A78u);
    ctx->pc = 0x241A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A70u;
    // 0x241a74: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x241A70u, 0x241A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A78u;
label_241a78:
    // 0x241a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a7c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x241A7Cu;
    SET_GPR_U32(ctx, 31, 0x241A84u);
    ctx->pc = 0x241A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A7Cu;
    // 0x241a80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x241A7Cu, 0x241A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A84u;
label_241a84:
    // 0x241a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a88: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x241A88u;
    SET_GPR_U32(ctx, 31, 0x241A90u);
    ctx->pc = 0x241A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A88u;
    // 0x241a8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x241A88u, 0x241A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A90u;
label_241a90:
    // 0x241a90: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x241a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x241a94: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x241a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x241a98: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x241a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x241a9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x241a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241aa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x241aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241aa4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x241aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x241aa8: 0x244264f0  addiu       $v0, $v0, 0x64F0
    ctx->pc = 0x241aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x241aac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x241aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ab0: 0x8c42056c  lw          $v0, 0x56C($v0)
    ctx->pc = 0x241ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1388)));
    // 0x241ab4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241AB4u;
    {
        const bool branch_taken_0x241ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AB4u;
        // 0x241ab8: 0x3200a  movz        $a0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ab4) {
            ctx->pc = 0x241ACCu;
            goto label_241acc;
        }
    }
    ctx->pc = 0x241ABCu;
    // 0x241abc: 0x8442054a  lh          $v0, 0x54A($v0)
    ctx->pc = 0x241abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x241ac0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x241ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241ac4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x241AC4u;
    {
        const bool branch_taken_0x241ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AC4u;
        // 0x241ac8: 0xa2200a  movz        $a0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ac4) {
            ctx->pc = 0x241AD0u;
            goto label_241ad0;
        }
    }
    ctx->pc = 0x241ACCu;
label_241acc:
    // 0x241acc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x241accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241ad0:
    // 0x241ad0: 0x24c264f0  addiu       $v0, $a2, 0x64F0
    ctx->pc = 0x241ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 25840));
    // 0x241ad4: 0x8c420568  lw          $v0, 0x568($v0)
    ctx->pc = 0x241ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1384)));
    // 0x241ad8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241AD8u;
    {
        const bool branch_taken_0x241ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AD8u;
        // 0x241adc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ad8) {
            ctx->pc = 0x241AF0u;
            goto label_241af0;
        }
    }
    ctx->pc = 0x241AE0u;
    // 0x241ae0: 0x8442054a  lh          $v0, 0x54A($v0)
    ctx->pc = 0x241ae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x241ae4: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x241ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241ae8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x241AE8u;
    {
        const bool branch_taken_0x241ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AE8u;
        // 0x241aec: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ae8) {
            ctx->pc = 0x241AF4u;
            goto label_241af4;
        }
    }
    ctx->pc = 0x241AF0u;
label_241af0:
    // 0x241af0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x241af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241af4:
    // 0x241af4: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x241af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241af8: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x241af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241afc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x241afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x241b00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x241b00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x241b04: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x241b04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241b08: 0x0  nop
    ctx->pc = 0x241b08u;
    // NOP
    // 0x241b0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x241B0Cu;
    {
        const bool branch_taken_0x241b0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B0Cu;
        // 0x241b10: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b0c) {
            ctx->pc = 0x241B18u;
            goto label_241b18;
        }
    }
    ctx->pc = 0x241B14u;
    // 0x241b14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x241b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241b18:
    // 0x241b18: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x241B18u;
    {
        const bool branch_taken_0x241b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B18u;
        // 0x241b1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b18) {
            ctx->pc = 0x241C04u;
            goto label_241c04;
        }
    }
    ctx->pc = 0x241B20u;
    // 0x241b20: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x241B20u;
    {
        const bool branch_taken_0x241b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B20u;
        // 0x241b24: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b20) {
            ctx->pc = 0x241C04u;
            goto label_241c04;
        }
    }
    ctx->pc = 0x241B28u;
label_241b28:
    // 0x241b28: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x241b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x241b2c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x241b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x241b30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241b34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x241b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x241b38: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x241b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x241b3c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x241b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x241b40: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x241b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_241b44:
    // 0x241b44: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x241b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x241b48: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x241b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x241b4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241b50: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x241b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x241b54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x241b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x241b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241b5c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x241b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241b60: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x241b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x241b64: 0xa2030617  sb          $v1, 0x617($s0)
    ctx->pc = 0x241b64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 3));
    // 0x241b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x241b70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x241b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x241b74: 0xc055f06  jal         func_157C18
    ctx->pc = 0x241B74u;
    SET_GPR_U32(ctx, 31, 0x241B7Cu);
    ctx->pc = 0x241B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B74u;
    // 0x241b78: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x241B74u, 0x241B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B7Cu;
label_241b7c:
    // 0x241b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b80: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x241B80u;
    SET_GPR_U32(ctx, 31, 0x241B88u);
    ctx->pc = 0x241B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B80u;
    // 0x241b84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x241B80u, 0x241B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B88u;
label_241b88:
    // 0x241b88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x241b88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x241b8c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x241B8Cu;
    SET_GPR_U32(ctx, 31, 0x241B94u);
    ctx->pc = 0x241B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B8Cu;
    // 0x241b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x241B8Cu, 0x241B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B94u;
label_241b94:
    // 0x241b94: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x241b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241b98: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x241b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241b9c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x241b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x241ba0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x241ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x241ba4: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x241ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241ba8: 0x0  nop
    ctx->pc = 0x241ba8u;
    // NOP
    // 0x241bac: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x241BACu;
    {
        const bool branch_taken_0x241bac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BACu;
        // 0x241bb0: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241bac) {
            ctx->pc = 0x241C04u;
            goto label_241c04;
        }
    }
    ctx->pc = 0x241BB4u;
    // 0x241bb4: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x241bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x241bb8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x241bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x241bbc: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x241bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x241bc0: 0x3c013ffa  lui         $at, 0x3FFA
    ctx->pc = 0x241bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16378 << 16));
    // 0x241bc4: 0x34211cac  ori         $at, $at, 0x1CAC
    ctx->pc = 0x241bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7340);
    // 0x241bc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241bcc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x241bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x241bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x241bd4: 0x3c01c16d  lui         $at, 0xC16D
    ctx->pc = 0x241bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49517 << 16));
    // 0x241bd8: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x241bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
    // 0x241bdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x241bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x241be0: 0xe6031748  swc1        $f3, 0x1748($s0)
    ctx->pc = 0x241be0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5960), bits); }
    // 0x241be4: 0xe60006d0  swc1        $f0, 0x6D0($s0)
    ctx->pc = 0x241be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1744), bits); }
    // 0x241be8: 0xe60106d4  swc1        $f1, 0x6D4($s0)
    ctx->pc = 0x241be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1748), bits); }
    // 0x241bec: 0xe60206d8  swc1        $f2, 0x6D8($s0)
    ctx->pc = 0x241becu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1752), bits); }
    // 0x241bf0: 0xe60406e0  swc1        $f4, 0x6E0($s0)
    ctx->pc = 0x241bf0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1760), bits); }
    // 0x241bf4: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x241bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x241bf8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x241bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x241bfc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x241bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x241c00: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x241c00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_241c04:
    // 0x241c04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x241c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_241c08:
    // 0x241c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241c0c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x241c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x241c10: 0x3e00008  jr          $ra
    ctx->pc = 0x241C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C10u;
        // 0x241c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241C18u;
}
