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

// Function: func_001158E8
// Address: 0x1158e8 - 0x115c00
void func_001158E8_0x1158e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001158E8_0x1158e8");
#endif

    switch (ctx->pc) {
        case 0x11596cu: goto label_11596c;
        case 0x115974u: goto label_115974;
        case 0x1159e8u: goto label_1159e8;
        case 0x1159fcu: goto label_1159fc;
        case 0x115a1cu: goto label_115a1c;
        case 0x115a24u: goto label_115a24;
        case 0x115a50u: goto label_115a50;
        case 0x115a5cu: goto label_115a5c;
        case 0x115b00u: goto label_115b00;
        case 0x115b64u: goto label_115b64;
        case 0x115b84u: goto label_115b84;
        case 0x115b98u: goto label_115b98;
        case 0x115ba0u: goto label_115ba0;
        case 0x115bb4u: goto label_115bb4;
        case 0x115bd8u: goto label_115bd8;
        case 0x115be4u: goto label_115be4;
        default: break;
    }

    ctx->pc = 0x1158e8u;

    // 0x1158e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1158e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1158ec: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1158ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1158f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1158f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158f4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1158f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1158f8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1158f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1158fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1158fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x115900: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x115900u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x115904: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x115904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x115908: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x115908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11590c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x11590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x115910: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x115910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x115914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11591c: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x11591cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x115920: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x115920u;
    {
        const bool branch_taken_0x115920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115920u;
        // 0x115924: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115920) {
            ctx->pc = 0x1159F4u;
            goto label_1159f4;
        }
    }
    ctx->pc = 0x115928u;
    // 0x115928: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x115928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11592c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11592Cu;
    {
        const bool branch_taken_0x11592c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11592c) {
            ctx->pc = 0x115930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11592Cu;
            // 0x115930: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115944u;
            goto label_115944;
        }
    }
    ctx->pc = 0x115934u;
    // 0x115934: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x115934u;
    {
        const bool branch_taken_0x115934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115934u;
        // 0x115938: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115934) {
            ctx->pc = 0x11595Cu;
            goto label_11595c;
        }
    }
    ctx->pc = 0x11593Cu;
    // 0x11593c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x11593Cu;
    {
        const bool branch_taken_0x11593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11593Cu;
        // 0x115940: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11593c) {
            ctx->pc = 0x115BECu;
            goto label_115bec;
        }
    }
    ctx->pc = 0x115944u;
label_115944:
    // 0x115944: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x115944u;
    {
        const bool branch_taken_0x115944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115944u;
        // 0x115948: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115944) {
            ctx->pc = 0x115B20u;
            goto label_115b20;
        }
    }
    ctx->pc = 0x11594Cu;
    // 0x11594c: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x11594Cu;
    {
        const bool branch_taken_0x11594c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11594Cu;
        // 0x115950: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11594c) {
            ctx->pc = 0x115B90u;
            goto label_115b90;
        }
    }
    ctx->pc = 0x115954u;
    // 0x115954: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x115954u;
    {
        const bool branch_taken_0x115954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115954u;
        // 0x115958: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115954) {
            ctx->pc = 0x115BECu;
            goto label_115bec;
        }
    }
    ctx->pc = 0x11595Cu;
label_11595c:
    // 0x11595c: 0xa64005e0  sh          $zero, 0x5E0($s2)
    ctx->pc = 0x11595cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x115960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115964: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x115964u;
    SET_GPR_U32(ctx, 31, 0x11596Cu);
    ctx->pc = 0x115968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115964u;
    // 0x115968: 0xa64005e2  sh          $zero, 0x5E2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x115964u, 0x11596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11596Cu;
label_11596c:
    // 0x11596c: 0xc049396  jal         func_124E58
    ctx->pc = 0x11596Cu;
    SET_GPR_U32(ctx, 31, 0x115974u);
    ctx->pc = 0x115970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11596Cu;
    // 0x115970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x11596Cu, 0x115974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115974u;
label_115974:
    // 0x115974: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x115974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x115978: 0x26440490  addiu       $a0, $s2, 0x490
    ctx->pc = 0x115978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x11597c: 0xc6400660  lwc1        $f0, 0x660($s2)
    ctx->pc = 0x11597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115980: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x115980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x115984: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x115984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x115988: 0xc6400668  lwc1        $f0, 0x668($s2)
    ctx->pc = 0x115988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11598c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x11598cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x115990: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x115990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x115994: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115994u;
    {
        const bool branch_taken_0x115994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x115994) {
            ctx->pc = 0x115998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115994u;
            // 0x115998: 0xc6400670  lwc1        $f0, 0x670($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1159B8u;
            goto label_1159b8;
        }
    }
    ctx->pc = 0x11599Cu;
    // 0x11599c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1159a0: 0xe6400490  swc1        $f0, 0x490($s2)
    ctx->pc = 0x1159a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x1159a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1159a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1159a8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1159a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1159ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1159acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1159b0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1159b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1159b4: 0xc6400670  lwc1        $f0, 0x670($s2)
    ctx->pc = 0x1159b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1159b8:
    // 0x1159b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1159b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159bc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x1159bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x1159c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1159c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159c4: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x1159c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x1159c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1159c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1159ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1159d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1159d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159d4: 0x8c4504cc  lw          $a1, 0x4CC($v0)
    ctx->pc = 0x1159d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1228)));
    // 0x1159d8: 0x8c4604d0  lw          $a2, 0x4D0($v0)
    ctx->pc = 0x1159d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
    // 0x1159dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1159dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1159e0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1159E0u;
    SET_GPR_U32(ctx, 31, 0x1159E8u);
    ctx->pc = 0x1159E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159E0u;
    // 0x1159e4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1159E0u, 0x1159E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159E8u;
label_1159e8:
    // 0x1159e8: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1159e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x1159ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1159ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1159f0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x1159f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_1159f4:
    // 0x1159f4: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1159F4u;
    SET_GPR_U32(ctx, 31, 0x1159FCu);
    ctx->pc = 0x1159F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159F4u;
    // 0x1159f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1159F4u, 0x1159FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159FCu;
label_1159fc:
    // 0x1159fc: 0x8e4215f4  lw          $v0, 0x15F4($s2)
    ctx->pc = 0x1159fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5620)));
    // 0x115a00: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x115a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x115a04: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x115a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x115a08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x115a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a0c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x115a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x115a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a14: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x115A14u;
    SET_GPR_U32(ctx, 31, 0x115A1Cu);
    ctx->pc = 0x115A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A14u;
    // 0x115a18: 0xae4215f4  sw          $v0, 0x15F4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x115A14u, 0x115A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A1Cu;
label_115a1c:
    // 0x115a1c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x115A1Cu;
    SET_GPR_U32(ctx, 31, 0x115A24u);
    ctx->pc = 0x115A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A1Cu;
    // 0x115a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x115A1Cu, 0x115A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A24u;
label_115a24:
    // 0x115a24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x115A24u;
    {
        const bool branch_taken_0x115a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A24u;
        // 0x115a28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a24) {
            ctx->pc = 0x115A30u;
            goto label_115a30;
        }
    }
    ctx->pc = 0x115A2Cu;
    // 0x115a2c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x115a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_115a30:
    // 0x115a30: 0xc6400338  lwc1        $f0, 0x338($s2)
    ctx->pc = 0x115a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115a3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x115a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x115a40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x115a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x115a44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x115a44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x115a48: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x115A48u;
    SET_GPR_U32(ctx, 31, 0x115A50u);
    ctx->pc = 0x115A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A48u;
    // 0x115a4c: 0xe6400338  swc1        $f0, 0x338($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x115A48u, 0x115A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A50u;
label_115a50:
    // 0x115a50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x115a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x115a54: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x115A54u;
    SET_GPR_U32(ctx, 31, 0x115A5Cu);
    ctx->pc = 0x115A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A54u;
    // 0x115a58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x115A54u, 0x115A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A5Cu;
label_115a5c:
    // 0x115a5c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x115a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x115a60: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x115a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x115a64: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x115A64u;
    {
        const bool branch_taken_0x115a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A64u;
        // 0x115a68: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a64) {
            ctx->pc = 0x115BE4u;
            goto label_115be4;
        }
    }
    ctx->pc = 0x115A6Cu;
    // 0x115a6c: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x115a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x115a70: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115A70u;
    {
        const bool branch_taken_0x115a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x115a70) {
            ctx->pc = 0x115A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115A70u;
            // 0x115a74: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115A94u;
            goto label_115a94;
        }
    }
    ctx->pc = 0x115A78u;
    // 0x115a78: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x115a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115a7c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x115a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x115a80: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x115a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115a84: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x115a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x115a88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x115a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115a8c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x115a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x115a90: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x115a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_115a94:
    // 0x115a94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x115a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x115a98: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115A98u;
    {
        const bool branch_taken_0x115a98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A98u;
        // 0x115a9c: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a98) {
            ctx->pc = 0x115ABCu;
            goto label_115abc;
        }
    }
    ctx->pc = 0x115AA0u;
    // 0x115aa0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x115aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115aa4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x115aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x115aa8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x115aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115aac: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x115aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x115ab0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x115ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115ab4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x115ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x115ab8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x115ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_115abc:
    // 0x115abc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x115abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115ac0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x115ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x115ac4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x115ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115ac8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x115ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x115acc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115ad0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ad4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x115ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x115ad8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x115ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115adc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x115adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x115ae0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x115ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115ae4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x115ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x115ae8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x115ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115aec: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x115aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x115af0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x115af0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115af4: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x115af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x115af8: 0xc04c784  jal         func_131E10
    ctx->pc = 0x115AF8u;
    SET_GPR_U32(ctx, 31, 0x115B00u);
    ctx->pc = 0x115AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115AF8u;
    // 0x115afc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x115AF8u, 0x115B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B00u;
label_115b00:
    // 0x115b00: 0x14500039  bne         $v0, $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x115B00u;
    {
        const bool branch_taken_0x115b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x115B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B00u;
        // 0x115b04: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b00) {
            ctx->pc = 0x115BE8u;
            goto label_115be8;
        }
    }
    ctx->pc = 0x115B08u;
    // 0x115b08: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x115b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115b0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x115b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115b10: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x115b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x115b14: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x115b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x115b18: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x115B18u;
    {
        const bool branch_taken_0x115b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B18u;
        // 0x115b1c: 0xa24302f6  sb          $v1, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b18) {
            ctx->pc = 0x115BE8u;
            goto label_115be8;
        }
    }
    ctx->pc = 0x115B20u;
label_115b20:
    // 0x115b20: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x115b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x115b24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x115b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b28: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x115b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x115b2c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x115b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x115b30: 0x8c5104d4  lw          $s1, 0x4D4($v0)
    ctx->pc = 0x115b30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1236)));
    // 0x115b34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x115b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b38: 0x8c5004d8  lw          $s0, 0x4D8($v0)
    ctx->pc = 0x115b38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1240)));
    // 0x115b3c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x115b3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x115b40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115b44: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x115b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x115b48: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x115b48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x115b4c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x115b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x115b50: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x115b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x115b54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x115b58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x115b5c: 0xc0c1a40  jal         func_306900
    ctx->pc = 0x115B5Cu;
    SET_GPR_U32(ctx, 31, 0x115B64u);
    ctx->pc = 0x115B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B5Cu;
    // 0x115b60: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306900u, 0x115B5Cu, 0x115B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B64u;
label_115b64:
    // 0x115b64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x115b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x115b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x115b6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x115b70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115b78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b7c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x115B7Cu;
    SET_GPR_U32(ctx, 31, 0x115B84u);
    ctx->pc = 0x115B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B7Cu;
    // 0x115b80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x115B7Cu, 0x115B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B84u;
label_115b84:
    // 0x115b84: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x115b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x115b88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x115b8c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x115b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_115b90:
    // 0x115b90: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x115B90u;
    SET_GPR_U32(ctx, 31, 0x115B98u);
    ctx->pc = 0x115B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B90u;
    // 0x115b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x115B90u, 0x115B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B98u;
label_115b98:
    // 0x115b98: 0xc055f06  jal         func_157C18
    ctx->pc = 0x115B98u;
    SET_GPR_U32(ctx, 31, 0x115BA0u);
    ctx->pc = 0x115B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B98u;
    // 0x115b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x115B98u, 0x115BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BA0u;
label_115ba0:
    // 0x115ba0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115BA0u;
    {
        const bool branch_taken_0x115ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BA0u;
        // 0x115ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ba0) {
            ctx->pc = 0x115BC4u;
            goto label_115bc4;
        }
    }
    ctx->pc = 0x115BA8u;
    // 0x115ba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115bac: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x115BACu;
    SET_GPR_U32(ctx, 31, 0x115BB4u);
    ctx->pc = 0x115BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BACu;
    // 0x115bb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x115BACu, 0x115BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BB4u;
label_115bb4:
    // 0x115bb4: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x115bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x115bb8: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x115bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x115bbc: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x115bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x115bc0: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x115bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_115bc4:
    // 0x115bc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115bc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x115bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x115bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115bd0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x115BD0u;
    SET_GPR_U32(ctx, 31, 0x115BD8u);
    ctx->pc = 0x115BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BD0u;
    // 0x115bd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x115BD0u, 0x115BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BD8u;
label_115bd8:
    // 0x115bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115bdc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x115BDCu;
    SET_GPR_U32(ctx, 31, 0x115BE4u);
    ctx->pc = 0x115BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BDCu;
    // 0x115be0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x115BDCu, 0x115BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BE4u;
label_115be4:
    // 0x115be4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x115be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_115be8:
    // 0x115be8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x115be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_115bec:
    // 0x115bec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x115becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115bf0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x115bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115bf4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x115bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x115bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x115BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BF8u;
        // 0x115bfc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C00u;
}
